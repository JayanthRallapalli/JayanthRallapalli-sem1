#include<stdio.h>
int main()
{
	int i,j,k,r1,r2,c1,c2,a[20][20],b[20][29],c[20][20];
	
	printf("enter no of rows,columns in matrix a :\n");
	scanf("%d %d",&r1,&c1);
	
	printf("enter no of rows,columns in matrix b :\n");
	scanf("%d %d",&r2,&c2);
	
	if(c1==r2)
	{
		
	printf("enter first matrix elements :");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter 2 matrix elements :");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			c[i][j]=0;
			for(k=0;k<c1;k++)
			{
				c[i][j]=c[i][j]+a[i][k]*b[k][j];//formula for multiplication//
			}
		}
	}
	printf(" multiplication of two matrix:\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("%d\t",c[i][j]);
	    }printf("\n");
    }
  }
  if(c1!=r2)
  { 
  printf("multiplication is not possible");
  }
}
