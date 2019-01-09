#include "strstr.h"

char *Strstr(char *src, char *dst)
{
    if (src==NULL || dst == NULL)
    {
        return NULL;
    }
    u32 src_len = strlen(src);
    u32 dst_len = strlen(dst);
    u32 i = 0, j = 0;
    if (dst_len > src_len)
    {
       return NULL;
    }
    for (i=0; i<(src_len-dst_len); i++)
    {
        if (*(src+i) != *(dst) )
        {
            continue;
        }
        j = 0;
        while (j<dst_len)
        {
            if (*(src+i+j) == *(dst+j))
            {
                j += 1;
                if (j==dst_len)
                {
                    return src+i;
                }
            }
            else
            {
                j = 0;
                break;
            }
        }
    }
    return NULL;
}
