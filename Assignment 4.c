/*
    Prisha Patel
    COP 3223C
    Assignment 4
    February 6th, 2023
*/

#include <stdio.h>

int main()
{
    // Part 1
    printf("Part 1\n\n");
    int a = 5, b = 4, c = 3, d = 2;
    
    if( a <= b + 1 ) // 5 <= 4 + 1 -> 5 <= 5 therefore, TRUE
    {
        printf("a <= b + 1 is: TRUE\n");
    }
    else
    {
        printf("a <= b + 1 is: FALSE\n");
    }
    
    if ( a < b && c > b ) // 5 < 4 && 3 > 2 are both not TRUE therefore, FALSE
    {
        printf("a < b && c > b is: TRUE\n");
    }
    else
    {
        printf("a < b && c > b is: FALSE\n");
    }
    
    if( a >= c || d >= 5 ) // 5 >= 3 OR 2 >= 4 one of them is TRUE therefore, TRUE
    {
        printf("a >= c || d >= 5 is: TRUE\n");
    }
    else
    {
        printf("a >= c || d >= 5: FALSE\n");
    }
    
    if( !( a > b) ) // 5 > 4 is TRUE therefore, !(5 > 4) is FALSE
    {
        printf("!( a > b) is: TRUE\n");
    }
    else
    {
        printf("!( a > b) is: FALSE\n");
    }
    
    if( b >= a && !(d < b) ) // 4 >= 5 && !(2 < 4) both of them is not TRUE therefore, FALSE
    {
    printf("b >= a && !(d < b) is: TRUE\n");
    }
    else
    {
        printf("b >= a && !(d < b) is: FALSE\n\n\n"); 
    }
    
    // Part 2
    printf("Part 2\n\n");
    int grades, passing, mean;
    grades = 0;
    mean = 0;
    passing = 0;
    printf("Enter your grade: ");
    scanf("%d", &grades);
    while ( grades != -1)
    {
        if(grades >= 0 && grades <= 100)
        {
            mean += 1;
        }
        if(grades >= 0 && grades < 70)
        {
            passing += 0;
            printf("Enter your grade: ");
            scanf("%d", &grades);
        }
        else if(grades >= 70 && grades <= 100)
        {
            passing += 1;
            printf("Enter your grade: ");
            scanf("%d", &grades);
        }
        else
        {
            printf("That is not a valid grade!\n");
            passing += 0;
            printf("Enter your grade: ");
            scanf("%d", &grades);
        }

        
    }
    printf("You have entered %d passing grades.\n", passing);
    double percentagePass = ((double)passing / (double)mean) * 100;
    printf("%0.1lf%% of the valid grades entered are passing grades.", percentagePass);
    

}