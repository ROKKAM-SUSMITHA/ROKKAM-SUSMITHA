#include<stdio.h>
void main()
{
	char a[20];
	printf("enter string:");
	scanf("%s",a);
	int i=0,sum=0;
	while(*(a+i)!='\0')
	{
		sum++;
		i++;
	}
	printf("length  of string:%d ",sum);
}
