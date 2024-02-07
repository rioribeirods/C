#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int dificulty;
    int value1;
    int value2;
    int operation;
    int result;
} Calculate;

int points = 0;
int sum(int answer, Calculate calc);
int subtract(int answer, Calculate calc);
int multiply(int answer, Calculate calc);
void play();
void showInfo(Calculate calc);

int main() {
    srand(time(NULL));
    play();
    return 0;
}

void play(){
	Calculate calc;
	int dificulty;

	printf("Select the dificulty level [1, 2, 3 or 4]:\n");
	scanf("%d", &dificulty);
	calc.dificulty = dificulty;

	calc.operation = rand() % 3;

	if(calc.dificulty == 1){
		calc.value1 = rand() % 11;
		calc.value2 = rand() % 11;
	}else if(calc.dificulty == 2){
		calc.value1 = rand() % 101;
		calc.value2 = rand() % 101;
	}else if(calc.dificulty == 3){
		calc.value1 = rand() % 1001;
		calc.value2 = rand() % 1001;
	}else if(calc.dificulty == 4){	
		calc.value1 = rand() % 10001;
		calc.value2 = rand() % 10001;
	}else{
		calc.value1 = rand() % 100001; 
		calc.value2 = rand() % 100001;
	}

	int answer;
	printf("Answer the result for the operation: \n");

	if(calc.operation == 0){
		printf("%d + %d\n", calc.value1, calc.value2);
		scanf("%d", &answer);

		if(sum(answer, calc)){
			points += 1;
			printf("You have %d point(s).\n", points);
		}
	}
	else if(calc.operation == 1){
		printf("%d - %d\n", calc.value1, calc.value2);
		scanf("%d", &answer);

		if(subtract(answer, calc)){
			points += 1;
			printf("You have %d point(s).\n", points);
		}
	}
	else if(calc.operation == 2){
		printf("%d * %d\n", calc.value1, calc.value2);
		scanf("%d", &answer);

		if(multiply(answer, calc)){
			points += 1;
			printf("You have %d point(s).\n", points);
		}
	}
	else{
		printf("The operation %d is unknown.\n", calc.operation);
	}


	printf("Do you still want to play? [1 - yes, 0 - no]\n");
	int cont;
	scanf("%d", &cont);

	if(cont){
		play();
	}else{
		printf("You finished with %d point(s).\n", points);
		printf("See you next time.");
		exit(0);
	}
}

void showInfo(Calculate calc){
    char op[25];
    
    if(calc.operation == 0){
        sprintf(op, "Sum");
    } else if(calc.operation == 1){
        sprintf(op, "Subtract");
    } else if(calc.operation == 2){
        sprintf(op, "Multiply");
    } else{
        sprintf(op, "Unknown operation");
    }
    printf("Value 1: %d \nValue 2: %d \nDificulty: %d \nOperation: %s", calc.value1, calc.value2, calc.dificulty, op);
}

int sum(int answer, Calculate calc){
    int result = calc.value1 + calc.value2;
    calc.result = result;
    int right = 0;
    
    if(answer == calc.result){
        printf("Right answer!\n");
        right = 1;
    } else {
        printf("Wrong answer!\n");
    }
    printf("%d + %d = %d\n", calc.value1, calc.value2, calc.result);
    return right;
};

int subtract(int answer, Calculate calc){
    int result = calc.value1 - calc.value2;
    calc.result = result;
    int right = 0;
    
    if(answer == calc.result){
        printf("Right answer!\n");
        right = 1;
    } else {
        printf("Wrong answer!\n");
    }
    printf("%d - %d = %d\n", calc.value1, calc.value2, calc.result);
    return right;
};

int multiply(int answer, Calculate calc){
    int result = calc.value1 * calc.value2;
    calc.result = result;
    int right = 0;
    
    if(answer == calc.result){
        printf("Right answer!\n");
        right = 1;
    } else {
        printf("Wrong answer!\n");
    }
    printf("%d * %d = %d\n", calc.value1, calc.value2, calc.result);
    return right;
};
