#include<stdio.h>
int main()
{
	int n,t,c=0,r;
	printf("enter number");
	scanf("%d",&n);
	t=n;
	while(t!=0)
	{
		r=t%10;
		c=c*10+r;
		t=t/10;
	}
	if(c==n)
	{
		printf("the number is palindrome");
	}
	else
	{
		printf("the number is not palindrome");
	}
	
	
}
