#include "palindrome.h"

int main(int argc, char *argv[])
{
	printf("palindrome programe \r\n");
	char s[] = "0P";

	printf(" [%s] [%s] \r\n", s, IsPalindrome(s)?"True":"False");

	return 0;
}

