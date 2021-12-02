//
// Created by luax2 on 30/11/2021.
//
#include "Set.h"

struct set
{
    Bst *tree;
    int (*compare)(void *a, void *b);
    void (*display)(void *element);
    int count;

};

Set *newSet(int (*cmp)(void *a,void*b), void(*display)(void*element))
{
    Set *s= malloc(sizeof(Set));
    s->compare=cmp;
    s->display=display;
    s->count=0;
    s->tree=newBst();
    return s;

}


void add(Set *s, void *element)
{
    s->count++;
    addNode(s->tree,element,s->compare);

}