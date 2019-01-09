#include "strstr.h"

int main(int argc, char *argv[])
{
    printf("strstr programe \r\n");
    char s[] = "kkkacnnn";
    char d[] = "abc";
    printf(" [%s] is contains [%s] -- [%s] \r\n", s, d, 
            Strstr(s,d));
    return 0;
}
