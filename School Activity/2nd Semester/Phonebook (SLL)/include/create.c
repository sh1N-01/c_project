#include<stdlib.h>
#include "../lib/main.h"

Record *create()
{
    Record *newRecord = (Record *)malloc(sizeof(Record));
    newRecord->next = NULL;

    return newRecord;
}