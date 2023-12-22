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

DList *createDList();
doublyNode *createNode(int data);
void addBeginDL(DList **list, int data);
void addEndDL(DList **list, int data);
void printDL(DList *list);
void deleteBegDL(DList **list);
void deleteEndDL(DList **list);
void deleteKeyDL(DList **list, int key);
doublyNode *searchKeyDL(DList *list, int key);

#endif