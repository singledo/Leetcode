#include "AddTwoSum.h"

int main(int argc, char *argv[])
{
	printf("Add Two List, And return the result\r\n");
	int list_1[] = {1,2,3,4};
	int list_2[] = {5,6,7,8};
	Node l_1, l_2;
	Node total ;
	total.next = NULL;
	total.val = -1;

	l_1.next = NULL;
	l_1.val = -1;
	l_2.next = NULL;
	l_2.val = -1;

	int i = 0;

	for (i=0; i<4; i++)
	{
		if (ListEndAdd(&l_1, list_1[i]) == false)
		{
			printf("Error, 1-[%d] \r\n", i);
		}
		if (ListEndAdd(&l_2, list_2[i]) == false)
		{
			printf("Error, 2-[%d] \r\n", i);
		}
	}
 	ShowList(&l_1);
	ShowList(&l_2);
	TwoListAdd(&l_1, &l_2, &total);
	ShowList(&total);

	return 0;
}
