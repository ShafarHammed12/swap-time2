#include<stdio.h>
int main() {
    int firstNumber, secondNumber;;
    printf("Enter first number: ");
    scanf("%i", &firstNumber);
    printf("%d \n", firstNumber);
    
    printf("Enter second number: ");
    scanf("%i", &secondNumber);
    printf("%d \n", secondNumber);

    firstNumber = firstNumber - secondNumber;   
    secondNumber = firstNumber + secondNumber;
    firstNumber = secondNumber - firstNumber;

    printf("First Number after swapping is %i \n", firstNumber);
    printf("Second Number after swapping is %i", secondNumber);
    return 0;
}