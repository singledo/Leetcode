#include "list.h"

int main(int argc, char *argv[])
{
    printf("List Test Porgrame \r\n");
    char s[] = "abcdef\":g{}";
    printf("[%s] \r\n", strstr(s,"{"));
    printf("[%s] \r\n", strstr(s,"\""));
    printf("[%s] \r\n", strstr(s,":"));

    return 0;
}
