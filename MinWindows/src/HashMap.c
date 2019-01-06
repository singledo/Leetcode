#include "HashMap.h"

u32 HashGet(Hash *map,char c)
{
	return map->hash[c];
}

bool HashPut(Hash *map, char c, u32 time)
{
	map->hash[c] = time;
	return true;
}

void HashMap_Init(Hash *map, char *src, u32 len)
{
	u32 i = 0;

	memset(map->hash, 0, sizeof(u32)*ALPHABET_MAX);
	for(i=0; i<len; i++)
	{
		map->hash[*(src+i)] += 1;
	}
}

void HashShow(Hash *map)
{
	u32 i = 0;
	for(i=0; i<ALPHABET_MAX; i++)
	{
		if (map->hash[i] != 0)
		{
			printf("{%c}: [%d] ", i, map->hash[i]);
			printf("\r\n");
		}
	}
}

char* MinWindow(char *src, char *tar)
{
	u32 src_len = strlen(src);
	u32 tar_len = strlen(tar);
	u32 i = 0, counter=0;
	u32 sta = 0;
	u32 MinLen = src_len;
	Hash src_map, tar_map;
	u32 begin = -1, end=src_len;
	
//	printf("s-len [%d] t-len [%d] \r\n", src_len, tar_len);

	HashMap_Init(&tar_map, tar, tar_len);
	memset (src_map.hash, 0, sizeof(u32)*ALPHABET_MAX);
	
	for (i=0; i<src_len; i++)
	{
		++src_map.hash[*(src+i)];
		if (src_map.hash[*(src+i)] <= tar_map.hash[*(src+i)])
		{
			counter += 1;
		}	
		
		if (counter == tar_len)	
		{
			while (sta<i && src_map.hash[*(src+sta)] > tar_map.hash[*(src+sta)])
			{
				sta += 1;
				src_map.hash[*(src+sta)] -= 1;
			}
			
			if (i - sta < MinLen)
			{
				begin = sta;
				MinLen = i - begin;
				end = i;				
			}

//			printf("begin [%d] end [%d] \r\n", begin, end);

			src_map.hash[*(src+sta)] -= 1;
			sta += 1;
			counter -= 1;
		}
	}

	if (begin == -1)
	{
		return NULL;
	}
	else
	{
		char *ret = (char *)malloc(sizeof(char)*(end-begin+2));
		if (ret == NULL)
		{
			printf("malloc failed [%d] \r\n", errno);
			return NULL;
		}
		memset(ret, 0, sizeof(char)*(end-begin+2));
		memcpy(ret, src+begin, end-begin+1);

		printf("## MIN Windows ### \r\n");
		printf("## begin [%d]  end [%d] \r\n", begin, end);
		printf("## src {%s} tar {%s} \r\n", src, tar);
		printf("## ret [%s] \r\n", ret);
		printf("\r\n\r\n");

		return ret;
	}

}


