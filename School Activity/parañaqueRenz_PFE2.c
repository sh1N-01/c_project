#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>
//Predefined Function
void weekDay(int day);

int main()
{
    system("cls");

    int day;

    printf("Enter a number: ");
    scanf("%d", &day);

    weekDay(day);
}
//Function to determine what day is the corresponding number inputted
void weekDay(int day)
{
    if (day == 1)
    {
        printf("Today's Monday.");
    }

    else if (day == 2)
    {
        printf("Today's Tuesday.");
    }

    else if (day == 3)
    {
        printf("Today's Wednesday.");
    }

    else if (day == 4)
    {
        printf("Today's Thursday.");
    }

    else if (day == 5)
    {
        printf("Today's Friday.");
    }

    else if (day == 6)
    {
        printf("Today's Saturday.");
    }

    else if (day == 7)
    {
        printf("Today's Sunday.");
    }

    else
    {
        printf("Invalid Input.");
        sleep(3);
        fflush(stdin);
        return main();
    }
    //Sorry miss i am not familiar with switch case :(
}
