#include <stdio.h>

int factorial(int n){
    if(n <=0){
        return 1;
    }else{
        return n * factorial(n - 1);
    }
}

int main() {
    int number = 5;
    int factorialResult;
    factorialResult = factorial(number);
    printf("Factorial of %d is: %d\n", number, factorialResult);
}




