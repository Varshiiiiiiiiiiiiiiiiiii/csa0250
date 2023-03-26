#include<stdio.h>
#include<string.h>
int main()
{
	char name1[50]="Apple",name2[50]="Apple";
	int Result;
	Result=strcmp(name1, name2);
	printf("%d",Result);
}
