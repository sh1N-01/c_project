#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

typedef struct Record
{
    char name[20];
    int number;
    struct Record *next;
}Record;

Record *create();

void menu();
int clone(Record **head);
char errorTrap();
int errorTrap1(int *replaceNum);
int errorTrap2();
void nameChange(Record **head);
void nameChange1(Record **head);
void choices(char choice, Record **head);

void append(Record **head, Record *newRecord);
void appendMenu(Record **head);
void browse(Record **head);
void browse1(Record **head);
void change(Record **head, int *replaceNum);
void changeMenu(Record **head);
void delete(Record **head, int toDelete);
void deleteMenu(Record **head);
void freeList(Record **head);

#endif