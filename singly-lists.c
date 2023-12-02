#include <stdio.h>
#include <stdlib.h>
#include "singly-lists.h"

// ------------------------------------------------------------------
typedef struct node
{
    int data;
    struct node *next;
} Node;

// cearte empty list ------------------------------------------------
Node *createEmptyList()
{
    return NULL;
}

// count number of nodes --------------------------------------------
int countNodes(Node *head)
{
    if (head == NULL)
        return 0;
    if (head->next == NULL)
        return 1;
    int i = 1;
    Node *temp = head->next;
    while (temp != NULL)
    {
        temp = temp->next;
        i++;
    }
    return i;
}

// insert node at the beginning -------------------------------------
void insertBegin(Node *head, int d)
{
    if (head == NULL)
    {
        head = (Node *)malloc(sizeof(Node));
        head->data = d;
        head->next = NULL;
        return;
    }
    Node *temp = (Node *)malloc(sizeof(Node));
    temp->data = d;
    temp->next = head;
    head = temp;
}

// insert node at the end --------------------------------------------
void insertEnd(Node *head, int d)
{
    if (head == NULL)
    {
        insertBegin(head, d);
        return;
    }
    Node *temp = head;
    while (temp != NULL)
        temp = temp->next;
    temp = (Node *)malloc(sizeof(Node));
    temp->data = d;
    temp->next = NULL;
}

// insert node in given position
void insertPosition(Node *head, int position, int d)
{
    if ((position <= 0) || (position > countNodes(head)))
        printf("Invalid Position\n");
    else
    {
        if (position == 0)
        {
            insertBegin(head, d);
            return;
        }
        Node *new_node = (Node *)malloc(sizeof(Node));
        new_node->data = d;
        new_node->next = NULL;
        Node *prev = head;
        for (int i = 1; i < position; i++)
            prev = prev->next;
        new_node->next = prev->next;
        prev->next = new_node;
    }
}

// delete first node
void deleteFirst(Node *head)
{
    if (head == NULL)
        return;
    if (head->next == NULL)
    {
        free(head);
        return;
    }
    Node *temp = head;
    head = head->next;
    free(temp);
}

// delete last node
void deleteLast(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        deleteFirst(head);
        return;
    }

    Node *temp = head;
    Node *last;
    while (temp->next != NULL)
    {
        last = temp;
        temp = temp->next;
    }
    last->next = NULL;
    free(temp);
}


// delete specific value from list


// empty list
void emptyList(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        deleteFirst(head);
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
        deleteFirst(head);
    }
}

// delete node in given position
void deletePosition(Node *head, int position)
{
    if ((position <= 0) || (position > countNodes(head)))
        printf("Invalid Position\n");
    else
    {
        if (position == 0){
            deleteFirst(head);
            return;
        }
        Node *temp = head, *prev;
        for (int i = 0; i < position; i++){
            prev = temp;
            temp = temp->next;
        }
        prev->next = temp->next;
        free(temp);
    }
}

// check if list contains element


// return node that contains element


// return position of element


// retrieve nth element


// count number of occurences of element


// merge two lists


// 


// display list


// display list in reverse order


// turn list into array then free it


// reverse a list


// check if list is palindrome


// remove duplicates


// return common elements between two lists


// split list in half

