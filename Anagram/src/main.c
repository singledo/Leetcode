#include "anagram.h"
#include "ComInc.h"

int main(int argc, char *argv[])
{
	printf("anagram programe \r\n");
	char src[] = "CCbbaacdf";
	char dst[] = "cde";
	printf("src [%s] \r\n", src);
	printf("dst [%s] \r\n", dst);
	printf("Is Anagrame [%s] \r\n", IsAnagrame(src, dst)?"True":"False");

	return 0;
}
