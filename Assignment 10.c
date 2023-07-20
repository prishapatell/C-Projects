/*
    Prisha Patel
    COP 3223C
    Assignment 10 
    March 27, 2023
*/

#include <stdio.h>
#include <string.h>

void backwards(char input[], int length);
void vertical(char input[], int length);
void triangle(char input[], int length);

// Main Function
int main()
{
    char input[100];
    int length;

    while(1)
        {
            
            // Getting User Input of String
            printf("Enter a word:\n");
            scanf("%s", input);
                        
            // Finding the length of the string
            length = strlen(input);
            
            // Printing the string forward
            printf("\nDisplaying the string Forwards: \n");
            printf("%s\n", input);
            
            // Printing the string backwards
            printf("\nDisplaying the string Backwards: \n");
            backwards(input, length);
            
            // Printing the string vertically
            printf("\n\nDisplaying the string Vertically: \n");
            vertical(input, length);

            // Printing the string in a triangle
            printf("\nDisplaying the string in a Triangle: \n");
            triangle(input, length);
            
            
            int choice;
            printf("\n\nWould you like to quit or re-run it?\n");
            printf("Type 1 to Quit\n");
            printf("Type 2 to Re-Run\n");
            scanf("%d", &choice);
            if (choice == 1)
            {
                break;
            }
        
        }
}

// Function for displaying string backwards
void backwards(char input[], int length)
{
    int x;

    // code to ouput the string backwards
    for(x = length - 1; x >= 0; x--)
    {
        printf("%c", input[x]);
    }
}
// Function for displaying string vertical
void vertical(char input[], int length)
{
    int x;

    // code to ouput the string vertically
    for(x = 0; x < length; x++)
    {
        printf("%c\n", input[x]);
    }
}
// Function for displaying string in a triangle
void triangle(char input[], int length)
{
    int i, j;
    for(i = 0; i < length; i++)
    {
        for (j = 0; j <= i; ++j) 
        {
            printf("%c ", input[i]);
        }
        printf("\n");
   }
}
