#include<stdio.h>
main()
{
	int x;
	printf("enter x value:");
	scanf("%d",&x);
	int y=(x>=0)?((x>0)?1:0):-1;
	printf("%d",y);
}
