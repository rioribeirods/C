#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct {
    int code;
    char name[30]; 
    float price;
} Product;

typedef struct {
    Product product;
    int quantity;
} Cart;

void infoProduct(Product prod);
void menu();
void registerProduct();
void listProducts();
void buyProduct();
void showCart();
Product productById(int code);
int * HasInCart(int code);
void finishOrder();

static int product_count = 0;
static int cart_count = 0;
static Cart cart[50];
static Product products[50];



int main() {
    menu();
    return 0;
}

void infoProduct(Product prod){
    printf("Code: %d \nName: %s \nPrice: %.2f\n", prod.code, strtok(prod.name, "\n"), prod.price);   
}

void menu(){
    printf("=================================\n");
    printf("=============Welcome=============\n");
    printf("=========== Rio Shop ============\n");
    printf("=================================\n");

    printf("Select a option below: \n");
    printf("1 - Register product\n");
    printf("2 - List products\n");
    printf("3 - Buy product\n");
    printf("4 - Show cart\n");
    printf("5 - Finish order\n");
    printf("6 - Exit\n");

    int option; 
    scanf("%d", &option);
    getchar();

    switch(option){
        case 1:
            registerProduct();
            break;
        case 2:
            listProducts();
            break;
        case 3:
            buyProduct();
            break;
        case 4:
            showCart();
            break;
        case 5:
            finishOrder();
            break;
        case 6:
            printf("Come back soon!");
            sleep(2);
            exit(0);
        default:
            printf("Unknown option.\n");
            sleep(2);
            menu();
            break;
    }
}
void registerProduct(){
    printf("Register product\n");
    printf("================\n");

    printf("Insert the product name: \n");
    fgets(products[product_count].name, 30, stdin);

    printf("Insert the product price: \n");
    scanf("%f", &products[product_count].price);

    printf("The product %s was registered with success.\n", strtok(products[product_count].name, "\n"));
    
    products[product_count].code = (product_count + 1);
    product_count++;

    sleep(2);
    menu();
}
void listProducts(){
    if(product_count > 0) {
        printf("List of products.\n");
        printf("-----------------\n");
        for(int i = 0; i < product_count; i ++){
            infoProduct(products[i]);
            printf("----------------\n");
            sleep(1);
        }
        sleep(2);
        menu();
    } else {
        printf("There is no products.\n");
        sleep(2);
        menu();
    }
}

void buyProduct(){
    if(product_count > 0){
        printf("Enter the product code you want to add to your cart.\n");
        printf("=============== Available Products =================\n");
        
        for(int i = 0; i < product_count; i++){
            infoProduct(products[i]);
            printf("----------------------\n");
            sleep(1);
        }

        int code;
        scanf("%d", &code);
        getchar();

       int has_in_stock = 0;

       for (int i = 0; i < product_count; i++){
            if(products[i].code == code) {
                has_in_stock = 1;

                if(cart_count > 0){
                    int * result_return = HasInCart(code);

                    if(result_return[0] == 1){
                        cart[result_return[1]].quantity++;
                        printf("One more %s has been added to the cart.\n", strtok(cart[result_return[1]].product.name, "\n"));
                        sleep(2);
                        menu();
                    } else {
                        Product p = productById(code);
                        cart[cart_count].product = p;
                        cart[cart_count].quantity = 1;
                        cart_count++;
                        printf("The product %s has been added to the cart.\n", strtok(p.name, "\n"));
                        sleep(2);
                        menu();
                    }
                } else {
                    Product p = productById(code);
                    cart[cart_count].product = p;
                    cart[cart_count].quantity = 1;
                    cart_count++;
                    printf("The product %s has been added to the cart.\n", strtok(p.name, "\n"));
                    sleep(2);
                    menu();
                }
            }
        }
       if(has_in_stock < 1){
            printf("There is no products with %d code.\n", code);
            sleep(2);
            menu();
       }
    } else {
        printf("There is no products to sell yet.\n");
        sleep(2);
        menu();
    }
}
void showCart(){
    if(cart_count > 0) {
        printf("Cart products\n");
        printf("-------------\n");
        for(int i = 0; i < cart_count; i++){
            infoProduct(cart[i].product);
            printf("Quantity: %d\n", cart[i].quantity);
            printf("-------------\n");
        }
        sleep(2);
        menu(0);
    } else {
        printf("There is no products in the cart.\n");
        sleep(2);
        menu();
    }
}

Product productById(int code){
    Product p;
    for(int i = 0; i < product_count; i++){
        if(products[i].code == code){
            p = products[i];
        }
    }
    return p;
}

int * HasInCart(int code){
    int static result_return[] = {0, 0};
    for(int i = 0; i < cart_count; i++){
        if(cart[i].product.code == code){
            result_return[0] = 1;
            result_return[1] = i;
        }
    }
    return result_return; 
}

void finishOrder(){
    if(cart_count > 0){
        float valueTotal = 0.0;
        printf("Products in cart\n");
        printf("----------------\n");
        for(int i = 0; i < cart_count; i++){
            Product p = cart[i].product;
            int quantity = cart[i].quantity;
            valueTotal += p.price * quantity;
            infoProduct(p);
            printf("Quantity: %d\n", quantity);
            printf("------------\n");
            sleep(1);
        }
        printf("Your invoice is $ %.2f\n", valueTotal);

        cart_count = 0;
        printf("Come back soon!\n");
    } else {
        printf("No product in cart yet.\n");
        sleep(3);
        menu();
    }
}
