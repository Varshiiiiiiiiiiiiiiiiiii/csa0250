#include<stdio.h>
#include<conio.h>

void main()
{
	float celsius,fahrenheit;
	
	printf("\n Enter the temperature in celsius: ");
	scanf("%f", &celsius);
	fahrenheit = (1.8 * celsius) + 32;
	printf("\n Temperature in fahrenheit : %f",fahrenheit);
	
	getch();
}
