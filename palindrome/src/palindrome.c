#include "palindrome.h"

bool IsPalindrome(char *s)
{
	u32 s_len = strlen(s);
	u32 i = 0;
	u32 j = 0;
	u32 d_len = 0;
	char *remove = (char*)malloc(sizeof(char)*s_len);

	memset(remove, 0, s_len);
	for (i=0; i<s_len; i++)
	{
		if ((*(s+i) >= '0' && *(s+i) <= '9') ||\
			   	(*(s+i) >= 'a' && *(s+i) <= 'z'))
		{
			*(remove + j) = *(s+i);
			j += 1;
		} 
		else if (*(s+i) >= 'A' && *(s+i) <= 'Z')
		{
			*(remove + j) = *(s+i)+('a'-'A');
			j += 1;	
		}

	}

	remove[j] = 0;
	printf("remove [%s]\r\n", remove);

	d_len = strlen(remove);

	for (i=0; i<(d_len/2); i++)
	{
		if (*(remove+i) != *(remove+d_len-i-1))
		{
		 	printf("[%d] \r\n", i);
			free (remove);
			return false;
		}
	}

	free (remove);
	return true;
}

