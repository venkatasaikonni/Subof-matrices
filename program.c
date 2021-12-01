ht#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],c[10][10];
	int r1,c1,r2,c2,i,j;
	printf("Enter row and column of matrix A");
	scanf("%d%d",&r1,&c1);
	printf("Enter row and column of matrix B");
	scanf("%d%d",&r2,&c2);
	if(r1<1 || r2<1 || r1>10 || r2>10 || c1<1 || c2<1 || c1>10 || c2>10)
		printf("Row or column is out of range");
	else if(r1!=r2 || c1!=c2)
		printf("Subtraction is not possible");
	else
	{
		printf("Enter %d no of elements of matrix A ",r1*c1);
		for(i=0;i<r1;i++)
			for(j=0;j<c1;j++)
				scanf("%d",&a[i][j]);
		printf("Enter %d no. of elements of matrix B",r2*c2);
		for(i=0;i<r2;i++)
			for(j=0;j<c2;j++)
				scanf("%d",&b[i][j]);
		for(i=0;i<r1;i++)
			for(j=0;j<c2;j++)
				c[i][j]=a[i][j]-b[i][j];
		printf("Subtraction of two matrices is \n");
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c1;j++)
				printf("%d ",c[i][j]);
			printf("\n");
		}		
	}
}
{
	int a[10][10],b[10][10],c[10][10];
	int r1,c1,r2,c2,i,j;
	printf("Enter row and column of matrix A");
	scanf("%d%d",&r1,&c1);
	printf("Enter row and column of matrix B");
	scanf("%d%d",&r2,&c2);
	if(r1<1 || r2<1 || r1>10 || r2>10 || c1<1 || c2<1 || c1>10 || c2>10)
		printf("Row or column is out of range");
	else if(r1!=r2 || c1!=c2)
		printf("Subtraction is not possible");
	else
	{
		printf("Enter %d no of elements of matrix A ",r1*c1);
		for(i=0;i<r1;i++)
			for(j=0;j<c1;j++)
				scanf("%d",&a[i][j]);
		printf("Enter %d no. of elements of matrix B",r2*c2);
		for(i=0;i<r2;i++)
			for(j=0;j<c2;j++)
				scanf("%d",&b[i][j]);
		for(i=0;i<r1;i++)
			for(j=0;j<c2;j++)
				c[i][j]=a[i][j]-b[i][j];
		printf("Subtraction of two matrices is \n");
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c1;j++)
				printf("%d ",c[i][j]);
			printf("\n");
		}		
	}
}
