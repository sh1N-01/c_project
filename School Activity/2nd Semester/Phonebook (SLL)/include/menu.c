#include<stdlib.h>

extern int main();

void menu()
{
    printf("==MAIN MENU==\n\n");
    printf("[A]ppend Record\n");
    printf("[B]rowse Record\n");
    printf("[C]hange Record\n");
    printf("[D]elete Record\n");
    printf("[E]xit\n\n");
    printf("Choice? ");
}

void appendMenu(Record **head)
{
    system("CLS");
    printf("== APPEND ==\n\n");

    Record *newRecord = create();

    printf("Enter name: ");
    scanf("%s", newRecord->name);
    printf("Enter number: ");
    scanf("%d", &newRecord->number);

    append(head, newRecord);

    printf("\nSuccess!\n");
    system("Pause");
    clone(head);
}

void changeMenu(Record **head)
{
    system("CLS");
    printf("== CHANGE ==\n\n");

    int *replaceNum, num;
    replaceNum = &num;

    browse1(head);

    printf("Enter number to replace: ");
    num = errorTrap1(replaceNum);

    change(head, replaceNum);
}

void deleteMenu(Record **head)
{
    system("CLS");
    printf("== DELETE ==\n\n");
    
    int toDelete, *pDelete;
    pDelete = &toDelete;

    browse1(head);

    printf("Enter number to delete: ");
    toDelete = errorTrap2();
    delete(head, toDelete);
}