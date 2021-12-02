//
// Created by luax2 on 30/11/2021.
//
#include <stdlib.h>
#ifndef SETSREPASO_BST_H
#define SETSREPASO_BST_H


typedef struct node Node;
typedef struct bst Bst;


Bst *newBst();
Node *newNode(void *val);
void addNode(Bst *b, void *value, int (*comp)(void *a, void *b));
int containsNode(Bst *b, void *value);

void printTreeRec(Node *currenNode, void(*display)(void *element));
void printTree(Bst *b, void(*display)(void *element));


void prinTreeIter(Bst *b);

#endif //SETSREPASO_BST_H
