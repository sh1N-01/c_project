/*
============================================
PROJECT BASIC AUTOMATED TELLER MACHINE (ATM) 

The following features:
- Password(6-digit PIN) Function
- Deposit & Withdrawal Function
- Account Balance Function
- Transaction History Function
- Exit Function
============================================
CONTRIBUTORS:
- 
- 
- 
- 
============================================
*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<windows.h>
#include<time.h>

#include "../libraries/displayMenu.c"
#include "../libraries/displayMenu.h"
#include "../libraries/errorTrap.h"
#include "../libraries/errorTrap.c"
#include "../libraries/inter-lib/exit.c"
#include "../libraries/inter-lib/exit.h"
#include "../libraries/inter-lib/pre-setup.c"
#include "../libraries/inter-lib/pre-setup.h"

int balance, pass, g[999], i = 1, j[999], k[999];
time_t h[999];

int main(void)
{
    preSetup();

    int x;

    displayMenu();
    x = errorTrap();
    choice(x, balance, pass);
}