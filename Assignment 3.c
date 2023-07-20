/*
    Prisha Patel
    COP 3223C
    Assignment 3
    January 31, 2023
*/

#include <stdio.h>

int main()

{
    float weight; // the user input of weight 
    float rate;  // the rate per weight either 3 or 5
    float totalShipping; // the total cost of shipping 
    int miles; // the user input of miles 
    int mileInt; // integer division of the miles by 500
    int mileSeg; // modulous division of the miles by 500
    int mileRate; // mileInt + mileSeg 
    int thousand; // if the distance of miles is greater than 1000
    
    // make the thousand = 0 first that way it has a starting value
    thousand = 0;
    
    // ask user to input their package weight
    printf("What is the weight of the package?: ");
    scanf("%f",&weight);
    
    // ask user to input the distance needed to travel
    printf("What is the miles the package need to travel?: ");
    scanf("%d", &miles);
    
    // the if-else statements and calculations
    if(weight <= 10)
    {
        rate = 3.00;
        printf("Weight:\t%0.1f\n", weight);
        printf("Miles:\t%d\n", miles);
    }
    
    else if (10 < weight && weight <= 50)
    {
        rate = 5.00;
        printf("Weight:\t%0.1f\n", weight);
        printf("Miles:\t%d\n", miles);
    }
    
    else if (weight > 50)
    {
        printf("Sorry, we only ship packages of 50 pounds or less.\n");
    }
    
    // if statement for the miles
    if (miles >= 1000)
    {
        thousand += 10;
    }
    
    // if statement for the mile segments
    if (miles > 500)
    {
        mileInt = miles / 500;
        mileSeg = miles % 500;
        if (mileSeg > 0)
        mileRate = mileInt + 1;
        else if (mileSeg == 0)
        mileRate = mileInt + 0;
        
        totalShipping = (rate * mileRate) + thousand;
    }
    
    else 
    {
        totalShipping = rate + thousand;
    }
    printf("Expected results:\n");
    printf("Your shipping charge is $%0.2lf",totalShipping);
}
