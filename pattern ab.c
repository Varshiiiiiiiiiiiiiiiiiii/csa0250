#include<stdio.h>
int main() {
	int row,i,j;
	printf("Enter the number of rows: ");
	scanf("%d", &row);
	printf("\n");
	for(i=1;i<=row;i++) {
		for(j=1;j<=2*(row-i);j++) {
			printf(" ");
		}
		for (j=1;j<=i;j++) {
			printf("%c",j+64);
		}
		printf("\n");
	}
	return 0;
}


	
	

