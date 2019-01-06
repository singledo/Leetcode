#include "reverse.h"

int ReverseInt(int x)
{
	printf("%lld \r\n", x);
	long temp = ((long)x);
	printf("%lld \r\n", temp);
	if (temp > (long) INT_MAX || temp < (long) INT_MIN)
	{
		return 0;
	}
	
	int sign = (x&(0x01UL<<32))?-1:1;
	long long multi = 1, div = 1;
	int i = 0;
	long long ret = 0;

	while (temp/div)
	{
		div*=10;
	}
	div/=10;
	for(; div>0; )
	{
		i = temp/div;
		temp = temp%div;    	
		ret += multi*i;
		div /= 10;
		multi *= 10;
	}
	
	return ((int)sign)*ret;
}

