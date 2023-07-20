/*
    Prisha Patel
    COP 3223C
    Assignment 9 
    March 20, 2023
*/

#include <stdio.h>
#define ROWS 4
#define COLS 5

int main()
{
    //  Code for Students Grades from User Input
    int studentGrades[ROWS][COLS];
    
    for(int i = 0; i < ROWS; i++)
    {
        for(int j = 0; j < COLS; j++)
        {
            printf("Student Grades: Row[%d] Col[%d] = ", i,j);
            scanf("%d", &studentGrades[i][j]);
            studentGrades[i][j];
        }
    }
    
    printf("\n");
    for(int i = 0; i < ROWS; i++)
    {
        for(int j = 0; j < COLS; j++)
        {
            printf("%d ", studentGrades[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // Code for Average Score for Students 1 through 4
    int Row;
    int Col;
    double Total;
    double Average;
    for(Row = 0; Row < 4; Row++)
        {
            Total = 0;
            for(Col = 0; Col < 5; Col++)
            {
                Total+= studentGrades[Row][Col];
            }
            Average = Total/Col;
            printf("The average score for Student %d is %.2lf\n",Row + 1, Average);
        }
        printf("\n");
    
    // Code for Average Score for Each Quiz
        for(int i = 0; i < Col; i++)
        {
            Total = 0;
            for(int j = 0; j < Row; j++)
            Total+= studentGrades[j][i];
            Average = Total/Row;
            printf("The average score for Quiz %d is %.2f\n",i + 1, Average);
        }
        printf("\n");
    
    // Code for Average Score for all Students and Quizzes
    double Sum = 0;
    for(int i = 0; i < Row; i++)
        {
            for(int j = 0; j < 5; j++)
            {
                Sum += studentGrades[i][j];
            }
        }
    Average = Sum/(Row * Col);
    printf("The average score for all Students in all Quizzes is %.2f\n",Average);

}
