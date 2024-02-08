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
    
}
void menu(){

}
void registerProduct(){

}
void listProducts(){

}
void showCart(){

}
Product productById(int code){

}
int * HasInCart(int code){

}
void finishOrder(){

}
