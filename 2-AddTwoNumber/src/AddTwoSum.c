#include "AddTwoSum.h"

bool ListEndAdd(Node *head, int val)
{
	Node *new = (Node*)malloc(sizeof(Node));
	Node *temp = head;

	if (new == NULL)
	{
		return false;
	}
	new->next = NULL;
	new->val = val;
	while (temp->next!=NULL)
	{
		temp = temp->next;
	}
	temp->next = new;
	return true;
}

bool ListHeadDel(Node *head, int *val)
{
	Node *temp = head->next;

	if (temp != NULL)
	{
		*val = temp->val;
		head->next = temp->next;
		free (temp);
		return true;
	}
	return false;
}

void ShowList(Node *list)
{
	Node *temp = list->next;
	while (temp!=NULL)
	{
		printf("%02d ", temp->val);
		temp = temp->next;
	}
	printf("\r\n");
}


void TwoListAdd(Node *num_1, Node *num_2, Node *total)
{
	Node *tem_1 = num_1->next;
	Node *tem_2 = num_2->next;
	Node *res   = total;
	Node *new   = NULL ;
	int carry_flag = 0;

	while (tem_1 != NULL || tem_2!=NULL)
	{
		new = (Node*)malloc(sizeof(Node));
		if (new == NULL)
		{
			return ;
		}
		new->next = NULL;

		if (tem_1 == NULL)
		{
			new->val = tem_2->val + carry_flag;	
			tem_2 = tem_2->next;
		}
		else if (tem_2 == NULL)
		{
			new->val = tem_2->val+carry_flag;
			tem_1 = tem_1->next;
		} 
		else
		{
			new->val = tem_1->val + tem_2->val + carry_flag;
			tem_1 = tem_1->next;
			tem_2 = tem_2->next;
		}
		if (new->val >= 10)
		{
			new->val -= 10;
			carry_flag = 1;
		}
		else
		{
			carry_flag = 0;
		}
		res->next = new;
		res = res->next;
		
	}
	if (carry_flag == 1)
	{
		new = (Node*)malloc(sizeof(Node));
		if (new == NULL)
		{
			return ;
		}
		new->next = NULL;
		new->val = 1;
		
		res->next = new;
	}

}
