#include "lib0020.h"

long long height_limit(long long M)
{
	long long low,mid,high;
	low = 1;
	high = M + 1;
	while(high > low)
	{
		mid = (high + low) / 2;
		if(is_broken(mid))
			high = mid;
		else
			low = mid + 1;
	}
	return low - 1;
}
