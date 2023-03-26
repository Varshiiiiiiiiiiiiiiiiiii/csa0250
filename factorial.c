
#include<stdio.h>
int main(void)
{
	int n = 0;
	int fact = 1;
	printf("Enter a positive integer: ");
	scanf("%d", &n);
	if (n < 0)
	{
		puts("Error! Factorial of a negative number doesn't exist.");
	}
	else
	{
		printf("%d! = ", n);
		
		{
			fact*=i;
			if (i!=n) printf(" * ");
			printf("%d",i);
		}
		printf(" = %d\n", fact);
	}
	
}
