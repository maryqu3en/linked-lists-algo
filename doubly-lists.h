#ifndef DOUBLY_LISTS_H
#define DOUBLY_LISTS_H

#include <stdio.h>
#include <stdlib.h>

typedef struct doublyNode
{
    int data;
    struct doublyNode *prev, *next;
} doublyNode;

typedef struct DList
{
    doublyNode *head;
    doublyNode *tail;
} DList;

void addBeginDL(DList **, int);
void addEndDL(DList **, int);
void printDL(DList *);
void deleteBegDL(DList **);
void deleteEndDL(DList **);
void deleteKeyDL(DList **, int);
doublyNode *searchKeyDL(DList *, int);

#endif