#include<stdio.h>
main()
{
	int n,i;
	printf("enter number of elements:");
	scanf("%d",&n);
	int a[n];
	printf("enter elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int *p=a,sum=0;
	for(i=0;i<n;i++)
	{
		sum=sum+*(a+i);
	}
	printf("sum of elements:%d",sum);
}
