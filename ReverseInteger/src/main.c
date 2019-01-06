#include "reverse.h"

int main(int argc, char *argv[])
{
    printf("reverse interger \r\n");
    int num = -10;
    int i = 0;
    printf("int [%d] long [%d] long long [%d] \r\n", sizeof(int), sizeof(long), \
            sizeof(long long));
    num = INT_MAX + 2;

    printf("orgin [%lld] reverse [%lld] \r\n", num, ReverseInt(num));

    return 0;
}
