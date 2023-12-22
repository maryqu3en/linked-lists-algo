# Linked Lists Implementations

This repository contains C language implementations of singly and doubly linked lists data structures. Additionally, there are exercises to reinforce your understanding of these fundamental data structures.

## Table of Contents

- [Introduction](#introduction)
- [Implemented Data Structures](#implemented-data-structures)
- [Exercise Problems](#exercise-problems)
- [How to Use](#how-to-use)

## Introduction

Understanding linked lists data structures is crucial in computer science. This repository provides implementations of singly and doubly linked lists, which are dynamic data structures allowing efficient memory usage.

## Implemented Data Structures

### Singly Linked List

- **countNodes(Node \*head):** Count number of nodes in list.
- **insertBegin(Node \*\*head, int d):** Insert new node at the beginning of the list.
- **insertEnd(Node \*\*head, int d):** Insert new node at the end of the list.
- **insertPosition(Node \*\*head, int position, int d):** Insert new node at given position of the list.
- **deleteFirst(Node \*\*head):** Delete the first node in the list.
- **deleteLast(Node \*\*head):** Delete the last node in the list.
- **emptyList(Node \*\*head):** Empty all elements of the list.
- **deletePosition(Node \*\*head, int position):** Delete node at given position.
- **searchItem(Node \*head, int key):** Search for node with given key in the list.


### Doubly Linked List

- **createDList():** Create a new doubly linked list.
- **createNode(int data):** Create a new doubly linked list node.
- **addBeginDL(DList \*\*list, int data):** Add a new node to the beginning of the doubly linked list.
- **addEndDL(DList \*\*list, int data):** Add a new node to the end of the doubly linked list.
- **printDL(DList \*list):** Print the doubly linked list.
- **deleteBegDL(DList \*\*list):** Delete the first node of the doubly linked list.
- **deleteEndDL(DList \*\*list):** Delete the last node of the doubly linked list.
- **deleteKeyDL(DList \*\*list, int key):** Delete a node with a specific key from the doubly linked list.
- **searchKeyDL(DList \*list, int key):** Search for a node with a specific key in the doubly linked list.


## Exercise Problems

1. **Reverse a Queue:**
   - Reverse the elements of a queue using a stack.

2. **Check if parentheses are balanced:**
   - Ckech if an expression has balanced parentheses or not using a stack.

## How to Use

1. Clone the repository:

   ```bash
   git clone https://github.com/maryqu3en/linked-lists-algo.git
   ```

2. Navigate to the project directory:

   ```bash
   cd linked-lists-algo
   ```

3. Compile the C files:

   ```bash
   gcc -o main *.c
   ```

4. Run the program:

   ```bash
   ./main
   ```