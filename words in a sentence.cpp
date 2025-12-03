#include<stdio.h>
int main()
{
	char s1[100];
	printf("enter a sentence:\n");
	fgets(s1,sizeof(s1),stdin);
	printf("%s",s1);
}
