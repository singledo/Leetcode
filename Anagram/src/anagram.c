#include "anagram.h"

bool IsAnagrame(char *src , char *dst)
{

	if (src == NULL || dst == NULL)
	{
		return false;
	}

	int i = 0, j = 0;
	int count = 0;
	u32 s_len = strlen(src);
	u32 d_len = strlen(dst);

	if (d_len > s_len)
	{
		return false;
	}

	for (i=0; i<s_len; i++)
	{
		if (*(src+i) == *(dst+j))
		{
			while (j < d_len)
			{
				if(*(src+i+j) != *(dst+j))
				{
					break;
				}	
				j += 1;
			}
			if(j == d_len)
			{
				return true;
			}
			else
			{
				j = 0;
			}
		}	
	}
	return false;
}
