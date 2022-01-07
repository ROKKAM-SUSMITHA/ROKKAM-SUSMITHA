#include<stdio.h>
int main()
{
	int n,i,c=0,r;
	printf("enter the number:");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		c=c*10+r;
		n=n/10;
	}
	printf("the reverse of the entered number:%d",c);
	return 0;	
}
