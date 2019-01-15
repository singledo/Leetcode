#ifndef _list_h
#define _list_h

#include "ComInc.h"

struct node 
{
    struct node *next;
    int val;
};
typedef struct node Node;

#endif

