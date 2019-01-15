#include "list.h"

u32 TwoListSum(Node *l1, Node *l2)
{

    return 0;
}

void ListAdd(Node *l, int val)
{
    Node *new = (Node*) malloc(sizeof(Node));
    Node *temp = l;
    if (new == NULL)
    {
        return;
    }
    new->val = val;
    new->next = NULL;
    while (temp->next)
    {
        temp = temp->next;
    }
    temp->next = new;
}

void ListDel(Node *l, int val)
{
   
}

