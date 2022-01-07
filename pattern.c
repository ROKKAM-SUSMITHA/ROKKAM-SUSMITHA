#include<stdio.h>
int main()
{
	int n,i,c,j;
	printf("enter a number of lines:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		c=65;
		for(j=0;j<2*n+1;j++)
		{
			if(j<n-i || j>n+i)
			{
				printf(" ");
			}
			else if(j<n)
			{
				printf("%c",c);
				c++;
			}
			else
			{
				printf("%c",c);
				c--;
			}	
			
		}
		printf("\n");
	}
	
}
