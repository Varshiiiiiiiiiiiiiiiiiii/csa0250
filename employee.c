#include<stdio.h>
struct employee
{
	int ID;
	char name[50];
	float salary;
}  emp;
int main() 
   {

    scanf("%d", &emp.ID);
	scanf("%s", emp.name);
	scanf("%f", &emp.salary);
	printf("%d",emp.ID);
	printf("%s",emp.name);
	printf("%f",emp.salary);
	return 0;
	
}

