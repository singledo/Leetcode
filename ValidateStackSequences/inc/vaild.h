#ifndef _vaild_h
#define _vaild_h

#include "ComInc.h"
#define INCREASE_SIZE (5)

struct Stack
{
    char *data;
    u32 Max_len;
    int idx;
    bool IsEmpty;
};
typedef struct Stack Stack;

Stack* StackInit(void);

void StackFree(Stack *stack);

#endif


