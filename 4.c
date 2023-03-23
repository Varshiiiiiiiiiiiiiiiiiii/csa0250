#include<stdio.h>
void main()
{
	int const*p=5;
	printf("%d",++(*p));
	return 0;
}
