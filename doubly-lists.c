#include "doubly-lists.h"

// Create a new doubly linked list
DList* createDList() {
    DList* newList = (DList*)malloc(sizeof(DList));
    if (newList == NULL) {
        printf("Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }

    newList->head = NULL;
    newList->tail = NULL;

    return newList;
}

// Create a new doubly linked list node
doublyNode* createNode(int data) {
    doublyNode* newNode = (doublyNode*)malloc(sizeof(doublyNode));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }

    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;

    return newNode;
}

// Add a new node to the beginning of the doubly linked list
void addBeginDL(DList** list, int data) {
    doublyNode* newNode = createNode(data);

    if ((*list)->head == NULL) {
        (*list)->head = newNode;
        (*list)->tail = newNode;
    } else {
        newNode->next = (*list)->head;
        (*list)->head->prev = newNode;
        (*list)->head = newNode;
    }
}

// Add a new node to the end of the doubly linked list
void addEndDL(DList** list, int data) {
    doublyNode* newNode = createNode(data);

    if ((*list)->tail == NULL) {
        (*list)->head = newNode;
        (*list)->tail = newNode;
    } else {
        newNode->prev = (*list)->tail;
        (*list)->tail->next = newNode;
        (*list)->tail = newNode;
    }
}

// Print the doubly linked list
void printDL(DList* list) {
    doublyNode* current = list->head;

    printf("Doubly Linked List: ");
    while (current != NULL) {
        printf("%d <-> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

// Delete the first node of the doubly linked list
void deleteBegDL(DList** list) {
    if ((*list)->head == NULL) {
        printf("Doubly Linked List is empty\n");
        return;
    }

    doublyNode* temp = (*list)->head;

    if ((*list)->head == (*list)->tail) {
        (*list)->head = NULL;
        (*list)->tail = NULL;
    } else {
        (*list)->head = (*list)->head->next;
        (*list)->head->prev = NULL;
    }

    free(temp);
}

// Delete the last node of the doubly linked list
void deleteEndDL(DList** list) {
    if ((*list)->tail == NULL) {
        printf("Doubly Linked List is empty\n");
        return;
    }

    doublyNode* temp = (*list)->tail;

    if ((*list)->head == (*list)->tail) {
        (*list)->head = NULL;
        (*list)->tail = NULL;
    } else {
        (*list)->tail = (*list)->tail->prev;
        (*list)->tail->next = NULL;
    }

    free(temp);
}

// Delete a node with a specific key from the doubly linked list
void deleteKeyDL(DList** list, int key) {
    doublyNode* current = searchKeyDL(*list, key);

    if (current == NULL) {
        printf("Key not found in the Doubly Linked List\n");
        return;
    }

    if (current == (*list)->head) {
        deleteBegDL(list);
    } else if (current == (*list)->tail) {
        deleteEndDL(list);
    } else {
        current->prev->next = current->next;
        current->next->prev = current->prev;
        free(current);
    }
}

// Search for a node with a specific key in the doubly linked list
doublyNode* searchKeyDL(DList* list, int key) {
    doublyNode* current = list->head;

    while (current != NULL) {
        if (current->data == key) {
            return current;
        }
        current = current->next;
    }

    return NULL;
}
