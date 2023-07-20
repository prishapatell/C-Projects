/*
    Prisha Patel
    COP 3223C
    Assignment 6 
    February 16th, 2023
*/

#include <stdio.h>

int main()
{
    int lowest;
    int highest;
    int number = 0;
    int userInput;
    int value = 0;
    double average = 0;
    
    printf("Enter a number: \n");
    scanf("%d", &userInput);
    
    lowest = userInput;
    highest = userInput;
    
    while(userInput >= 0 )
    {
        if(userInput < lowest)
            lowest = userInput;
        if(userInput > highest)
            highest = userInput;
            
        number += userInput;
        value += 1;
        printf("Enter a number: \n");
        scanf("%d", &userInput);
    }
    
    /*
    for(userInput = 0; userInput >= 0;)
    {
        printf("UserInput: %d\n", userInput);
        printf("Number: %d\n", number);
        printf("Enter a number: \n");
        scanf("%d", &userInput);
        number += userInput;
        printf("UserInput: %d\n", userInput);
        printf("Number: %d\n", number);  
        value += 1;
    }
    */
    
    printf("The lowest number is: %d\n", lowest);
    printf("The highest number is: %d\n", highest);
    printf("The number of values entered was: %d\n", value);
    average = (double)number / (double)value;
    printf("The average of the numbers was: %0.2lf", average);
}
