#include<stdio.h>
int main()
{
	int r1,c1,r2,c2,i,j,t;
	printf("enter the size of matrices:");
	scanf("%d %d %d %d",&r1,&c1,&r2,&c2);
	int a[r1][c1],b[r2][c2],c[r1][c2];
	printf("enter matrix1:");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter matrix2:");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	if(c1!=r2)
	{
		printf("multiplication not possible");
	}
	else{
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			c[i][j]=0;
			for(t=0;t<c1;t++)
			{
				c[i][j]=c[i][j]+a[i][t]*b[t][j];
			}
		}
	}
	printf("the resultant matrix:");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
}

}
