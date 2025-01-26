extern int pass, balance;

void choice(int x, int balance, int pass);

int cloNe()
{
    int x;

    displayMenu();
    x = errorTrap();
    choice(x, balance, pass);
}