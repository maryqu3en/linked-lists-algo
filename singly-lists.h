#ifndef SINGLY_LISTS_H
#define SINGLY_LISTS_H

#include <stdio.h>
#include <stdlib.h>

// ------------------------------------------------------------------
typedef struct node
{
    int data;
    struct node *next;
} Node;

// linked lists algorithms ------------------------------------------
// insertion and removal --------------------------------------------
int countNodes(Node *head);
void insertBegin(Node **head, int d);
void insertEnd(Node **head, int d);
void insertPosition(Node **head, int position, int d);
void deleteFirst(Node **head);
void deleteLast(Node **head);
void emptyList(Node **head);
void deletePosition(Node **head, int position);

#endif