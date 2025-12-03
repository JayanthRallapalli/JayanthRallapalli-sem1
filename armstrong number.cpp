#include<stdio.h>
int main()
{
	int num,sum,rem,number;
	printf("enter a number:");
	scanf("%d",&num);
	number=num;
	sum=0;
	while(num!=0)
	{
		rem = num %10;
		sum+=(rem*rem*rem);
		num=num/10;
	}
	if(number==sum)
	{
		printf("it is armstorng number");
	}
	else{
		printf("it is not an armstrong number");
	}
	return 0;
}  
