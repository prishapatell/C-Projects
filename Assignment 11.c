
/*    
    Prisha Patel
    COP 3223C
    Assignment 11 
    March 27, 2023
*/

#include <stdio.h>

int main() 
{

    // Array for the UnCoded 
    char unCoded[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    // char unCoded[] = {ABCDEFGHIJKLMNOPQRSTUVWXYZ};
    
    // Array for the Coded
    char coded[] =   {'H','I','V','J','K','W','L','A','M','Y','N','B','X','O','Z','C','T','P','U','D','Q','S','R','E','G','F'};
    // char coded[] = {HIVJKWLAMYNBXOZCTPUDQSREGF};

    int x;
    int i;
    int index;
    
    // Get string from user
    char input[100];
    char encoded[100];
    printf("Only enter CAPITAL LETTORS:\n");
    printf("Enter your input:\n");
    scanf("%s",input);
    
    x = 0;
    while(input[x] != 0)
    {
        for(i = 0; i < 26; i++)
        {
            if(unCoded[i]==(input[x]))
            {
                index = i;
                break;
            }
        }
        
        encoded[x]=coded[index];
        x++;
        
    }
    
    encoded[x]=0;
    printf("\nGiven word: %s\n",input);
    printf("Encoded word: %s\n",encoded);
    return 0;

} 
