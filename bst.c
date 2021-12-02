//
// Created by luax2 on 30/11/2021.
//
#include <stdlib.h>
#include <stdio.h>
#include "bst.h"
struct node
{
    int value;
    struct node *left;
    struct node *right;
};

struct bst
{
    Node *root
};

Bst *newBst()
{
    Bst *b= malloc(sizeof(Bst));
    b->root=NULL;
    return b;
}

Node *newNode(void *val)
{
    //crear espcio para el nodo
    Node *n= malloc(sizeof(Node));
    n->left=NULL;
    n->right=NULL;
    n->value=val;
    return n;
}

void addNode(Bst *b, void *value, int (*cmp)(void *a, void *b))
{
    if(b->root==NULL)
        b->root= newNode(value);
    return;
    //un temporal para recorrer
    Node *current=b->root;
    while(cmp(current->value,value)>0)
    {
        if(cmp(current->value,value)>0)
        {
            if(current->left==NULL)
            {
                current->left= newNode(value);
                return;
            }
            current=current->left;
        }
        if(cmp(current->value,value)<0)
        {
            if(current->right==NULL)
            {
                current->right= newNode(value);
                return;
            }
            current=current->right;
        }
    }

}

int containsNode(Bst *b, void *value)
{
    //un tmp para recorrer
    Node *focusNode=b->root;

    while(focusNode!=NULL && focusNode->value!=value)
    {
        if(focusNode->value>value)
            focusNode=focusNode->left;
        if(focusNode->value<value)
            focusNode=focusNode->right;

    }
    if(focusNode==NULL)
        return 0;

    return 1;
}
void printTreeRec(Node *currenNode, void(*display)(void *element))
{
    if(currenNode==NULL)
        return;
    printTreeRec(currenNode->left,display);
    display(currenNode->value);
    printTreeRec(currenNode->right,display);

}


void printTree(Bst *b, void(*display)(void *element))
{
    printTreeRec(b->root,display);
}
void prinTreeIter(Bst *b)
{

}
