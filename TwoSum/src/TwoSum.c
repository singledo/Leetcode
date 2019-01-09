#include "TwoSum.h"

u32* TwoSum(u32 *src, u32 len, u32 tar)
{
    int i = 0, j =0;
    for (i=0; i<len; i++)
    {
        for(j=i+1; j<len; j++)
        {
            if (*(src+i) + *(src+j) == tar)
            {
                u32 *ret = (u32*)malloc(sizeof(u32)*2);
                if (ret == NULL)
                {
                    return NULL;
                }
                *(ret+0) = i;
                *(ret+1) = j;
                return ret;
            }
        }
    }
    return NULL;
}
