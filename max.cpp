#include<stdio.h>
int main()
{
	int n,i,a[10], max;
	printf("enter n value");
	scanf("%d",&n);
	printf("enter array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("array elements:");
	for(i=0;i<n;i++)
	{
	printf("%d ",a[i]);
	}
	max = a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>max)
		{
			max = a[i];
		}
   }
   	printf("\nmaximum element is:%d",max);
	return 0;
}
