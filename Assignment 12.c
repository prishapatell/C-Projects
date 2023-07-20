/*
    Prisha Patel
    COP 3223C
    April 12, 2023
    Assignment 12: DNA.c
*/

#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 1000

int main() 
{
    char file_name[MAX_LENGTH]; // File name inputted by user
    char target[MAX_LENGTH];
    char buffer[MAX_LENGTH];
    int lines; // Number of lines in the file and to indicate which line is which
    int i; // For loop variable used
    int j; // For loop variable used
    int length; // The length of the DNA strand
    int score; // Variable for the score calculation
    int max_score; // The highest score in the file
    int max_score_line; // The line in the file with the highest score
    FILE *fp;

    // Ask user to input a file name
    printf("What file stores the DNA test cases?\n");
    scanf("%s", file_name);

    // If file found then open the file, if not then output error message
    fp = fopen(file_name, "r");
    
    if (fp == NULL) 
    {
        printf("Error: could not open file %s\n", file_name);
        return 1;
    }

    // Read the sample sequence of DNA
    fgets(target, MAX_LENGTH, fp);

    // Get the number of candidates
    fscanf(fp, "%d\n", &lines);

    // Scores calculated for each candidate 
    max_score = -1;
    max_score_line = -1;
    for (i = 1; i <= lines; i++) 
    {
        // Read the line 
        fgets(buffer, MAX_LENGTH, fp);

        // Check if it is a perfect match
        if (strcmp(buffer, target) == 0) 
        {
            printf("Candidate %d is a perfect match.\n", i);
            fclose(fp);
            return 0;
        } 

        // Calculate the line's score 
        score = 0;
        // length = strlen(target) < strlen(buffer) ? strlen(target) : strlen(buffer); - equivalent to the if statement below
        if (strlen(target) < strlen(buffer))
        {
            length = strlen(target);
        }
        else
        {
            length = strlen(buffer);
        }
        
        for (j = 0; j < length; j++) 
        {
            if (target[j] == buffer[j]) 
            {
                score += 3;
            } 
            else if ((target[j] == 'A' && buffer[j] == 'T') || (target[j] == 'T' && buffer[j] == 'A') || (target[j] == 'G' && buffer[j] == 'C') || (target[j] == 'C' && buffer[j] == 'G')) 
            {
                score += 1;
            }
        }
        
        // Integer Division
        score = score * 100 / (3 * length);
        
        // If Statement for comparing highest score
        if (score > max_score) 
        {
            max_score = score;
            max_score_line = i;
        }
    }
    printf("Candidate %d is the best match with a score of %d\n", max_score_line, max_score);
    fclose(fp);
    return 0;
}