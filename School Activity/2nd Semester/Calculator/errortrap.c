int errorTrap()
{
    int x;

    while(1)
    {
        if(scanf("%d", &x))
        {
            if (x >= 1 && x <= 5)
            {
                return x;
            }

            else
            {
                printf("Number not in the range! Try again. ");
            }
        }

        else
        {
            printf("Invalid Input! Try again. ");
            while(getchar() != '\n');
        }
    }
}

int errorTrap1()
{
    int x;

    while(1)
    {
        if(scanf("%d", &x))
        {
            return x;
        }

        else
        {
            printf("Invalid Input! Try again. ");
            while(getchar() != '\n');
        }
    }
}
