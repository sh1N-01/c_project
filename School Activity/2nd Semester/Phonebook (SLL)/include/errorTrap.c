#include<stdio.h>
#include<ctype.h>
#include<conio.h>

char errorTrap()
{
    char x;
    char choices[] = {'A', 'B', 'C', 'D', 'E', 'a', 'b', 'c', 'd', 'e'};
    int loop = sizeof(choices)/ sizeof(choices[0]);
    int match = 0;

    while(1)
    {
        if(scanf("%c", &x) == 1 && isdigit(x) != 1)
        {
            for(int i = 0; i < loop; i++)
            {
                if(x == choices[i])
                {
                    match++;
                    break;
                }
            }

            if(match == 1)
            {
                return x;
            }

            else
            {
                printf("Choice not in range! Try again. ");
            }
        }

        else
        {
            printf("Invalid Input! Try again. ");
            
        }
        while(getchar() != '\n');
    }
}

int errorTrap1(int *replaceNum)
{
    int num;

    while(1)
    {
        if(scanf("%d", &num) == 1)
        {
            if(num != *replaceNum)
            {
                return num;
            }

            else
            {
                printf("Input new Number! ");
            }
        }

        else
        {
            printf("Invalid Input! Try again. ");
        }
        while(getchar() != '\n');
    }
}

int errorTrap2()
{
    int num;

    while(1)
    {
        if(scanf("%d", &num) == 1)
        {
            return num;
        }

        else
        {
            printf("Invalid Input! Try again. ");
        }
        while(getchar() != '\n');
    }
}