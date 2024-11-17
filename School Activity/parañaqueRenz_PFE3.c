#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
//Predefined Function
void isHarshadNumber(int num, int sum);

int main()
{
    system("CLS");
    //Intialize Variable
    int num, sum;
    //Ask input
    printf("Enter a number: ");
    if(scanf("%d", &num))
    {
        //Call Function
        isHarshadNumber(num, sum);
    }

    else
    {
        printf("Invalid Input!");
        sleep(3);
        fflush(stdin);
        return main();
    }


}
//Function to get the sum of the inputted numbers, and determine if a harshad
void isHarshadNumber(int num, int sum)
{
    int num0 = num;
    if(num <= 0)
    {
        printf("Invalid Input!");
        sleep(3);
        fflush(stdin);
        return main();
    }

    else
    {
        //Loop to get the sum of inputted numbers
        while(num != 0)
        {
            if(num % 10 != 0)
            {
                sum = sum + (num % 10);
                num /= 10;
            }
        }
        //Sum output
        printf("Sum: %d", sum);
        //Condition: Determine if Harshad or not
        if(num0 % sum == 0)
        {
            printf("\n%d is a Harshad Number.", num0);
        }

        else
        {
            printf("\n%d is not a Harshad Number.\n", num0);
        }
    }

}

