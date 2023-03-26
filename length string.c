#include<stdio.h>
#include<string.h>
void main()
{
	char str[100];
	printf("Enter a string: ");
	scanf("%s",str);
	int len=strlen(str);
	printf("The lrngth of the string is : %d\n",len);
	return 0;
}
