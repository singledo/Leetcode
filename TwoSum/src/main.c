#include "TwoSum.h"
#include "ComInc.h"

int main(int argc, char *argv[])
{
    printf("Two Sum");
    u32 src[] = {1,2,3,4,5,6,7};
    u32 tar = 8;
    u32 *dst = NULL;
    dst = TwoSum(src, sizeof(src)/(src[0]), tar);
    if (dst != NULL)
        printf("[%d] [%d] \r\n", dst[0], dst[1]);
    return 0;
}
