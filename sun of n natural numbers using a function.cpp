//C Program: sum of n natural numbers Using a Function//
#include<stdio.h>
int sum(int n)
{
	if(n<=1)
	{
		return 1;
	}
	return n +sum(n-1);
}
 int main()
 {
 	int n;
 	printf("enter a number:");
 	scanf("%d",&n);
 	printf("the sum of %d is :%d",n,sum(n));
 	return 0;
 }
