#include <stdio.h>
#include <stdlib.h>

// functions
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);

int main(void){

    double num1;
    double num2;
    double result;
    char input[50];
    char operator;

    printf("Enter the first number: ");
    fgets(input, sizeof(input), stdin);
    num1 = strtod(input, NULL);

    printf("Enter the operator (+ - * /): ");
    fgets(input, sizeof(input), stdin);
    operator = input[0];

    printf("Enter the second number: ");
    fgets(input, sizeof(input), stdin);
    num2 = strtod(input, NULL);

    switch (operator){

        case '+':
            result = add(num1, num2);
            break;

        case '-':
            result = subtract(num1, num2);
            break;

        case '*':
            result = multiply(num1, num2);
            break;
        
        case '/':
            if(num2 == 0){
                printf("Error: Cannot divide by zero.\n");
            }
            result = divide(num1, num2);
            break;

        default:
            printf("Invalid Operator\n");
            return 1;
    }

    printf("Result: %.2f\n", result);

    return 0;
}

// function definitions

double add(double a, double b){
    return a + b;
}
double subtract(double a, double b){
    return a - b;
}
double multiply(double a, double b){
    return a * b;
}
double divide(double a, double b){
    return a / b;
}