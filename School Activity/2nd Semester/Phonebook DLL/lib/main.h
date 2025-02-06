#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

struct Contact
{
    struct Contact *prev;
    char name[20];
    int mobile;
    struct Contact *next;
};
typedef struct Contact Contact;

Contact *head = NULL;

void ext();
int appenD();
int browsE();
int changE();
int deletE(Contact **head);

char errorTrap();
int errorTrap1();
void menU();

#endif
