#include<stdio.h>
void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
void main()
{
	int a,b;
	printf("enter two numbers:");
	scanf("%d %d",&a,&b);
	swap(&a,&b);
	printf("numbers after swapping:%d %d",a,b);
}
