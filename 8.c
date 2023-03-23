#include<stdio.h>
int main()
{

int findFirstoccurrence(int A[],int n,int target)
{
	int low = 0,high = n - 1;
	while (low <= high)
	{
		int mid = low +(high - low)/2;
		if((mid == 0 || A[mid - 1]< target) && A[mid] == target)
		   return mid;
		else if (target > A[mid])
		    low = mid + 1;
		else
		    high = mid - 1;
	}
	return -1;
}

}







