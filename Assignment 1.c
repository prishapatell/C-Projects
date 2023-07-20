/*
    Prisha Patel
    COP 3223C
    January 16th, 2023
    Assignment 1
*/

#include <stdio.h>

int main()
{
    double revenue, cost, profit;
    // Enter the total revenue along with calling the function to have user input
    printf("Enter total revenue:");
    scanf("%lf",&revenue);
    
    // Enter the total cost along with calling the function to have user input
    printf("Enter total cost:");
    scanf("%lf",&cost);
  
    // Calculate the total profit by subtracting the cost from the revenue
    profit = revenue - cost;
    printf("Your profit is:%.2lf",profit);

    return 0;
}
