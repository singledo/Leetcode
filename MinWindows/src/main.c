#include "ComInc.h"
#include "HashMap.h"

int main(int argc, char *argv[])
{
	char src[][20] = 
	{
		"ADOBECODEBANC",
		"AABBCCDDEEFFGGHH",
		"ABCDEFGHIJKLMN"
	};
	char tar[] = "ABC";
	char *res = NULL;
	u32 i = 0;

	for (i=0; i<3; i++)
	{
		res = MinWindow(src[i],tar);
		if (res != NULL)
		{
//			printf("[%d] src {%s} tar {%s} res{%s} \r\n", i, src[i], tar, res);
			free(res);
			res = NULL;
		}
		else
		{
			printf("[%d] [NULL] \r\n", i);
		}
	}
#if 0
	res = MinWindow(src,tar);
	printf("res: [%s] \r\n", res);
	free(res);
	res = NULL ;
#endif

	return 0;
}
