/*
    Prisha Patel
    COP 3223 C
    Assignment 5
    February 10th, 2023
*/

#include <stdio.h>

int main()
{
    int first, second, third, fourth, sum, total;
    sum = 0;
    total = 0;
    // Part 1
    printf("Part 1\n");
    for (first = 5; first < 60; first += 5)
    {
        printf("\n%d", first);
    }
    printf("\n\n\n");
    
    // Part 2
    printf("Part 2\n");
    for (second = 2*7; second < 200; second += 2*7)
    {
        printf("\n%d", second);
    }
    printf("\n\n\n");
    
    // Part 3
    printf("Part 3\n");
    for (third = 8*13; third > 100 && third < 500 ; third += 8) // 8 * 13 is the number that is a multiple of 8 that is greater than 100
    {
        sum = sum + third;
    }
    printf("Sum is: %d\n", sum);
    printf("\n\n\n");
    
    // Part 4
    printf("Part 4\n");
    for (fourth = 21; fourth > 20 && fourth < 100 ; fourth += 2) // 21 is the next odd number after the int 20
    {
        total = total + fourth;
    }
    printf("Sum is: %d\n", total);
    printf("\n");
}
