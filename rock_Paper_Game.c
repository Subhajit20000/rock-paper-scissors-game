#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int IF_Else()
{
    int a;
    printf("Your turn please enter 0, 1 or 2\n\n");

    for (int i = 0; i < 1; i)
    {
        scanf("%d", &a);
        if (a == 0)
        {
            printf("You choose Rock\n\n");
            break;
        }
        else if (a == 1)
        {
            printf("You choose Paper\n\n");
            break;
        }
        else if (a == 2)
        {
            printf("You choose scissor\n\n");
            break;
        }
        else
        {
            printf("You choose wrong input\n\n");
        }
    }
    return a;
}

int rps()
{
    int n = 3;

    srand(time(NULL));

    return rand() % n;
}

int bot()
{

    printf("Computer turns\n\n");

    int b = rps();

    printf("%d\n", b);

    if (b == 0)
    {
        printf("Computer choose Rock\n\n");
    }
    else if (b == 1)
    {
        printf("Computer choose Paper\n\n");
    }
    else if (b == 2)
    {
        printf("Computer choose scissor\n\n");
    }

    return b;
}
static int You = 0;
static int Computer = 0;

int result(int a, int b)
{

    if (a == 0 & b == 0)
    {
        printf("This turn is draw\n\n");
        printf("Your score is %d  &  Computer score is  %d\n\n", You, Computer);
    }
    else if (a == 1 & b == 0)
    {
        printf("You win\n\n");
        You++;
        printf("Your score is %d  &  Computer score is  %d\n\n", You, Computer);
    }
    else if (a == 2 & b == 0)
    {
        printf("Computer win\n\n");
        Computer++;
        printf("Your score is %d  &  Computer score is  %d\n\n", You, Computer);
    }
    else if (a == 0 & b == 1)
    {
        printf("Computer win\n\n");
        Computer++;
        printf("Your score is %d  &  Computer score is  %d\n\n", You, Computer);
    }
    else if (a == 0 & b == 2)
    {
        printf("You win\n\n");
        You++;
        printf("Your score is %d  &  Computer score is  %d\n\n", You, Computer);
    }
    else if (a == 1 & b == 1)
    {
        printf("This turn is draw\n\n");
        printf("Your score is %d  &  Computer score is  %d\n\n", You, Computer);
    }
    else if (a == 1 & b == 2)
    {
        printf("Computer win\n\n");
        Computer++;
        printf("Your score is %d  &  Computer score is  %d\n\n", You, Computer);
    }

    else if (a == 2 & b == 2)
    {
        printf("This turn is draw\n\n");
        printf("Your score is %d  &  Computer score is  %d\n\n", You, Computer);
    }

    else if (a == 2 & b == 1)
    {
        printf("You win\n\n");
        You++;
        printf("Your score is %d  &  Computer score is  %d\n\n", You, Computer);
    }
}

int main()
{
    printf("Welcome to the rock, paper & scissor game\nPlease Enter your name\n");

    char name[30];

    gets(name);

    char h[7] = "Hello";
    char g[30] = ", welcome to our game\n";
    // strcat(h, name, g);
    printf("\n\n%s %s%s\n\n", h, name, g);

    printf("Games rules is 0 is Rock, 1 is paper & 2 is scissor\n\n");

    for (int i = 0; i < 3; i++)
    {
        int a = IF_Else();

        int b = bot();

        result(a, b);
    }

    if (Computer < You)
    {
        printf("\n\nThe Winer is \"%s\"\n\n", name);
    }
    else if (You < Computer)
    {
        printf("\n\nThe final result \"Winer is Computer\"\n\n");
    }
    else if (You == Computer)
    {
        printf("\n\n\"This match is draw\"\n\n");
    }
    return 0;
}
