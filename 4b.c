#include<stdio.h>
main()
{
	int x;
	printf("enter x value:");
	scanf("%d",&x);
	if(x>0)
	{
		printf("%d",1);
	}
	else if(x==0)
	{
		printf("%d",0);
	}
	else
	{
		printf("%d",-1);
	}
}
