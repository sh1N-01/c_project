#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

typedef struct Mag
{
    struct Mag *prev;
    float clipSize;
    struct Mag *next;
}Mag;

typedef struct Dispenser
{
    struct Dispenser *prev;
    int nth;
    int mag;
    Mag *content;
    struct Dispenser *next;
}Dispenser;

Dispenser *head = NULL;

void menU(Dispenser **head);
void ext(Dispenser **head);
void choicE(int *n);
void sizE();

int clonE();
int errorTrap();
int errorTrap1();
int errorTrap2(int count);
int loadTrap(int count);
int reloadTrap(int count);
int loadDispenser(Dispenser **head);
int traversE(Dispenser **head);
int viewLoad(Dispenser **head);
int reloaD(Dispenser **head);
int usE(Dispenser **head);
float sizeCatch();

#endif