#include <stdio.h>
#include <stdlib.h>
#include "singly-lists.h"


// Count number of nodes
int countNodes(Node* head) {
    int count = 0;
    Node* current = head;

    while (current != NULL) {
        count++;
        current = current->next;
    }

    return count;
}

// Insert node at the beginning
void insertBegin(Node** head, int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
}

// Insert node at the end
void insertEnd(Node** head, int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
        return;
    }

    Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
}

// Insert node at a given position
void insertPosition(Node** head, int position, int data) {
    if (position <= 0 || position > countNodes(*head) + 1) {
        printf("Invalid Position\n");
        return;
    }

    if (position == 1) {
        insertBegin(head, data);
        return;
    }

    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node->data = data;
    new_node->next = NULL;

    Node* prev = *head;
    for (int i = 2; i < position; i++) {
        prev = prev->next;
    }

    new_node->next = prev->next;
    prev->next = new_node;
}

// Delete first node
void deleteFirst(Node** head) {
    if (*head == NULL) {
        printf("List is empty\n");
        return;
    }

    Node* temp = *head;
    *head = (*head)->next;
    free(temp);
}

// Delete last node
void deleteLast(Node** head) {
    if (*head == NULL) {
        printf("List is empty\n");
        return;
    }

    if ((*head)->next == NULL) {
        deleteFirst(head);
        return;
    }

    Node* temp = *head;
    Node* last;

    while (temp->next != NULL) {
        last = temp;
        temp = temp->next;
    }

    last->next = NULL;
    free(temp);
}

// Empty the list
void emptyList(Node** head) {
    while (*head != NULL) {
        deleteFirst(head);
    }
}

// Delete node at a given position
void deletePosition(Node** head, int position) {
    if (position <= 0 || position > countNodes(*head)) {
        printf("Invalid Position\n");
        return;
    }

    if (position == 1) {
        deleteFirst(head);
        return;
    }

    Node* temp = *head;
    Node* prev;

    for (int i = 1; i < position; i++) {
        prev = temp;
        temp = temp->next;
    }

    prev->next = temp->next;
    free(temp);
}
