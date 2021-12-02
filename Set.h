//
// Created by luax2 on 30/11/2021.
//

#ifndef SETSREPASO_SET_H
#define SETSREPASO_SET_H

#include "bst.h"

typedef struct set Set;
Set *newSet(int (*cmp)(void *a,void*b), void(*display)(void*element));
void add(Set *s, void *element);
#endif //SETSREPASO_SET_H
