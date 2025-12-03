// with return and with parameters
#include<stdio.h>
int add(int a , int b)
{
	return a+b;
}

int main()
{
	int a =5, b =6, sum =0;
	sum = add(a,b);
	printf("%d",sum);
}
