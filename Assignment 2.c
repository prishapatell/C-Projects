/*
    Prisha Patel
    COP 3223 C
    Assignment 2 
    January 21, 2023
*/

#include <stdio.h>

int main()
{
    // Enter the first number
    int firstNum;
    printf("Enter the first number: ");
    scanf("%d", &firstNum);
    // You entered
    printf("You have entered: %d", firstNum);
    // Enter the second number
    int secondNum;
    printf("Enter the second number: ");
    scanf("%d", &secondNum);
    // You entered
    printf("You have entered: %d", secondNum);
    // The difference is
    int difference = firstNum - secondNum;
    printf("The difference is: %d\n", difference);
    // The product is
    int product = firstNum * secondNum;
    printf("The product is: %d\n", product);
    // The square of first num is
    int first_square = firstNum * firstNum;
    printf("The Square of %d is: %d\n",firstNum, product);
    // The square of second num is
    int second_square = secondNum * secondNum;
    printf("The Square of %d is: %d\n",secondNum, product);
    // Print statment of thank you
    printf("Thank You!");
}
