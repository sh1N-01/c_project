char errorTrap()
{
    char x;

    while(1)
    {
        if(scanf("%c", &x) && isdigit(x))
        {
            printf("Invalid Input! Try again. ");
            while(getchar() != '\n');
            
        }

        else
        {
            return x;
        }
    }
}

int errorTrap1()
{
    int x;

    while(1)
    {
        if(scanf("%d", &x) == 1)
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