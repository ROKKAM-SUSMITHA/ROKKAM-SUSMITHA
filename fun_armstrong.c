#include<stdio.h>
int armstrong(int n)
{
	int t=n,c=0,r;
	while(t!=0)
	{
		r=t%10;
		c=c+r*r*r;
		t=t/10;
	}
	if(n==c)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int n,res;
	printf("enter the number:");
	scanf("%d",&n);
	res=armstrong(n);
	if(res==1)
	{
		printf("given number is armstrong");
	}
	else
	{
		printf("given number is not armstrong");
	}
	return 0;
}
