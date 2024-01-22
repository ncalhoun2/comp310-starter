#include <stdio.h>

int main(){
    int num1;
    int num2;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    int sum = num1 + num2;
    printf("\nSum: %d\n", sum);
    int difference = num1 - num2;
    printf("Difference: %d\n", difference);
    int product = num1 * num2;
    printf("Product: %d\n", product);
    int quotient = num1 / num2;
    printf("Quotient: %d\n", quotient);
}