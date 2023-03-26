#include<stdio.h>
#include<conio.h>
void DecToHex(int dec);
static int i;
char hex[50];
int main()
{
	int decnum;
	printf("Enter any decimal number: ");
	scanf("%d", &decnum);
	DecToHex(decnum);
	printf("\nEquivalent value in Hexadecimal = ");
	for(i=i-1; i>=0; i--)
	   printf("%c", hex[i]);
	getch();
	return 0;
}
void DecToHex(int dec)
{
	int rem;
	while(dec!=0)
	{
		rem = dec%16;
		if(rem<10)
		    rem = rem+48;
		else
		    rem = rem+55;
		hex[i] = rem;
		i++;
		dec = dec/16;
	}
}
