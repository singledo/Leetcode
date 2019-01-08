#include "anagram.h"

bool IsAnagrame(char *src , char *dst)
{
#if 0
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
#endif
	u32 i = 0;
	Hash src_map, dst_map;
	HashMap_Init(&src_map, src, strlen(src));
	HashMap_Init(&dst_map, dst, strlen(dst));
	// HashShow(&src_map);
// 	HashShow(&dst_map);

	for (i=0; i<ALPHABET_MAX; i++)
	{
		if (src_map.hash[i] != dst_map.hash[i])
		{
			return false;
		}
	}
	return true;
}
