/*
    Prisha Patel
    COP 3223 C 
    game.c
    February 22, 2023
*/

/*
    - 2 games need to be played
        a game of completing addition or multiplication problems
        a game of guessing a secret number
        
    - menu of the game:
        1) Play Arithmetic game
            If this option is chosen:
            A) Addition 
            B) Multiplication 
            
            If either option A or B is chosen:
            "Maximum value of numbers to be used in the problems"
            "Total number of questions"
            
            During the game being played:
            - keep track of how much time it takes for these problems
            - 5 seconds penalty points added for a wrong answer
            - tally the total time it takes both the time for answering
              questions plus penalty points
              
            Points Accumulated in Arithmetic Game:
            - brother score = total amount of time (seconds)
              [including the penalty points] divided by the number
              of problems solved
              ex. total_score = (time + penalty) / problems;
              // time = the amount of time it takes for him to complete problems
              // penalty +=5 -> the amount of questions gotten wrong = adding 5 seconds on time
            

        2) Play Guessing game
            If this option is chosen:
            "Maximum integer ,N, for quessing game"
            - generate a number between 1 and number
            - After generating a number, it should prompt for his first guess
            - After he guesses, the program should say whether it was
              the guess was higher or lower than than the number
            
            During the game being played:
            - keep track of how much time it takes to play the game
            - the time it takes will determine how many points he gets
            
            Points Accumulated in Guessing Game:
            - brother score = (total amount of time) / 2 * the number of digits of the 
              maximum number 
              ex. total amount of time = 15, maximum number = 1000 -> digits = 4 
              - total_score = 15 / (2 * 4); // = 1.875
        
        3) Print Score
            If this option is chosen:
            - print the total score = the sum of all scores from each game
              that had been playes
            - scores should be converted into an integer number of points in between 0 & 10
                Times:          Scores:
                t < 1           10
                1 <= t < 2      9
                2 <= t < 3      8
                3 <= t < 3      7
                4 <= t < 4      6
                5 <= t < 5      5
                6 <= t < 6      4
                7 <= t < 7      3
                8 <= t < 8      2
                9 <= t < 9      1
                t >= 10         0
        
        4) Quit 
            If this option is chosen:
            - simple print statment:
            - "Thank you for playing!"
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ADD 1
#define MULT 2

void menu();
double arithGame(int max, int quantity, int op);
double guessGame(int max);
int numDigits(int number);
int numPoints(double timesec);

int main()
{
    srand(time(0));

    int option = 1;
    int total = 0;
    int points = 0;
    int points1 = 0;
    while(option > 0 && option < 4)
        {
            menu();
            scanf("%d", &option);
            if(option == 1)
            {
                int op, max, quantity;
                printf("Choose the type of Arithmetic Game:\n");
                printf("1. Addition\n");
                printf("2. Multiplication\n");
                scanf("%d", &op);
         
                if(op == 1 || op == 2)
                {
                    printf("What is the maximum number you would like?\n");
                    scanf("%d", &max);
                    printf("What is the number of questions you would like?\n");
                    scanf("%d", &quantity);
                }
                double result = arithGame(max, quantity, op);
                points = numPoints(result);
                total += points;
            }
            else if(option == 2)
            {
                int max;
                printf("What is the maximum number you would like?\n");
                scanf("%d", &max);
                double result1 = guessGame(max);
                points1 = numPoints(result1);
                total += points1;
            }
            else if(option == 3)
            {
                printf("Your score is %d.\n\n",total);
            }
            else if(option == 4)
            {
                printf("Thank you for playing!");
            }
        }
}

// function to display game menu
void menu()
{
    printf("Choose one from the following:\n");
    printf("1. Play Arithmetic Game\n");
    printf("2. Play Guessing Game\n");
    printf("3. Print Score\n");
    printf("4. Quit\n");
}

// function for the arithmetic game
double arithGame(int max, int quantity, int op)
{
    int start = time(0);
    for(int i = 0; i < quantity; i += 1)
    {
        int num1 = rand() % max + 1;
        int num2 = rand() % max + 1;
        int guesses;
        if(op == 1)
        {
            int sum = num1 + num2;
            printf("%d + %d =\n", num1, num2);
            printf("Enter a guess: \n");
            scanf("%d", &guesses);
            
            if (guesses == sum)
            {
                printf("Correct, Great Job!\n");
            }
            else
            {
                printf("Sorry, that's incorrect, the answer is %d\n", sum);
                start = start - 5;
            }
        }
        else
        {
            int sum = num1 * num2;
            printf("%d * %d =\n", num1, num2);
            printf("Enter a guess: \n");
            scanf("%d", &guesses);
            
            if (guesses == sum)
            {
                printf("Correct, Great Job!\n");
            }
            else
            {
                printf("Sorry, that's incorrect, the answer is %d\n", sum);
                start = start - 5;
            }
        }
    }
    int end = time(0);
    int timespent = end - start;    
    printf("You took an average of %lf seconds per question.\n", (double)timespent);
    return timespent/quantity;
}

// function for the guessing game
double guessGame(int max)
{
    int num;
    int guess;
    int guesses = 1;
    int start = time(0);
    int ans = rand() % max + 1;
    
    printf("Enter a guess: \n");
    scanf("%d", &guess);

    while (guess != ans)
    {
        if(guess == ans)
        {
            break;
        }
        else if(guess < ans)
        {
            printf("Guess is too low try again!\n");
        }
        else if(guess > ans)
        {
            printf("Guess is too high try again!\n");
        }
        
        printf("Enter a guess: \n");
        scanf("%d", &guess);
        guesses += 1;
    }
    int end = time(0);
    int timespent = end - start;
    printf("Great, you guessed the correct number %d in %d guesses in %d seconds.\n", ans, guesses, timespent);
    return timespent/(2 * numDigits(max));
}

// function to return number of digits into a number
int numDigits(int number)
{
    if (number == 0)
        return 1;
    int digits = 0;
    while (number != 0) {
        number = number / 10;
        ++digits;
    }
    return digits;
}

// function for points earned in the game
int numPoints(double timesec)
{
    if(timesec < 1)
    {
        printf("Your score for this round is 10\n");
        return 10;
    }
    
    else if(timesec >= 1 && timesec < 2)
    {
        printf("Your score for this round is 9\n");
        return 9;
    }
    
    else if(timesec >= 2 && timesec < 3)
    {
        printf("Your score for this round is 8\n");
        return 8;
    }
    
    else if(timesec >= 3 && timesec < 4)
    {
        printf("Your score for this round is 7\n");
        return 7;
    }
    
    else if(timesec >= 4 && timesec < 5)
    {
        printf("Your score for this round is 6\n");
        return 6;
    }
    
    else if(timesec >= 5 && timesec < 6)
    {
        printf("Your score for this round is 5\n");
        return 5;
    }
    
    else if(timesec >= 6 && timesec < 7)
    {
        printf("Your score for this round is 4\n");
        return 4;
    }
    
    else if(timesec >= 7 && timesec < 8)
    {
        printf("Your score for this round is 3\n");
        return 3;
    }
    
    else if(timesec >= 8 && timesec < 9)
    {
        printf("Your score for this round is 2\n");
        return 2;
    }
    
    else if(timesec >= 9 && timesec < 10)
    {
        printf("Your score for this round is 1\n");
        return 1;
    }
    
    else if(timesec >= 10)
    {
        printf("Your score for this round is 0\n");
        return 0;
    }
}
