#include<stdio.h>
int main()
{
	int n,i,c=0;
	printf("enter the number:");
	scanf("%d",&n);
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			c++;
		}
	}
	if(c!=0)
	{
		printf("Given number is not prime");
	}
	else
	{
		printf("Given number is prime");
	}
	
	
}
