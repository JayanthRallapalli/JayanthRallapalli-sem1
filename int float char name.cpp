#include<stdio.h>
int main ()
{
	int a;
	float b;
	char d;
	char str[20];
	
	printf("enter a value :");
	scanf("%d",&a);
	
	printf("enter b decimal:");
	scanf("%f",&b);
	
	printf("enter grade:");
	scanf("%c\n",&d);
	
	printf("enter name:");
	scanf("%s\n",str);
	
    printf("\n%d\n%f%c",a,b,d);
    printf("%s",str);
	return 0;
}

