#include "vaild.h"


Stack* StackInit(void)
{
    Stack* new = (Stack*)malloc(sizeof(Stack));
    new->idx = 0;
    new->Max_len = INCREASE_SIZE;
    new->data = (char*)malloc(sizeof(INCREASE_SIZE));
    new->IsEmpty = true;
    memset(new->data, 0, INCREASE_SIZE);
    return new;
}

void StackFree(Stack *stack)
{
    if (stack->data != NULL)
    {
        free (stack->data);
    }
    if (stack != NULL)
    {
        free (stack);
    }
}

bool StackPush(Stack *st, char ch)
{
    if (st->IsEmpty == true)
    {
        st->IsEmpty = false;
        st->idx = 0;
    }
    else
    {
        st->idx += 1;
    }

    if (st->idx > st->Max_len)
    {
        st->data = (char*)realloc(st, sizeof(st->Max_len+INCREASE_SIZE));
        if (st->data == NULL)
        {
            return false;
        }
        st->Max_len += INCREASE_SIZE;
        *(st->data+st->idx) = ch;
    }

    *(st->data+st->idx) = ch;
    return true;
}

bool StatckPop(Stack *st, char *ch)
{
    if (st->IsEmpty == true)
    {
        return false;
    }
    else
    {
        *ch = *(st->data + st->idx);
        st->idx -= 1;
        if (st->idx == -1)
        {
            ts->IsEmpty = true;
        }
        return true;
    }
}
