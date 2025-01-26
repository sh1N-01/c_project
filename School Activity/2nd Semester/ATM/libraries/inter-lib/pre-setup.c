#include "deposit.c"
#include "deposit.h"
#include "inquiry.c"
#include "inquiry.h"
#include "transaction.c"
#include "transaction.h"
#include "withdraw.c"
#include "withdraw.h"

void choice(int x, int balance, int pass);

extern int pass, balance;

void preSetup()
{
    SetConsoleTitle("Basic Automated Teller Machine (Prototype)");
    

    int *ptx, *ptb;
    ptx = &pass;
    ptb = &balance;

    printf("Please set your 6-digit PIN: ");
    *ptx = sixDigitTrap();
    printf("Starting Balance: ");
    *ptb = errorTrap1();
}

void choice(int x, int balance, int pass)
{
    switch(x)
    {
        case 1:
            system("CLS");
            deposit();
            break;

        case 2:
            system("CLS");
            withdraw();
            break;

        case 3:
            system("CLS");
            balInqui();
            break;

        case 4:
            system("CLS");
            trnscHstry();
            break;

        case 5:
            ext();
            break;
    }
}