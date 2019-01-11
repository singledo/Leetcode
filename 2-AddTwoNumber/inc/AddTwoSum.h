#ifndef _AddTwoSum_h
#define _AddTwoSum_h

#include "ComInc.h"

struct ListNode
{
	int val;
	struct ListNode *next;
};
typedef struct ListNode Node;

bool ListHeadDel(Node *head, int *val);

bool ListEndAdd(Node *head, int val);

void ShowList(Node *list);

void TwoListAdd(Node *num_1, Node *num_2, Node *total);

#endif

