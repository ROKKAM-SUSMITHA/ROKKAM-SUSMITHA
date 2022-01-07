#include<stdio.h>
int main()
{
	int n,s,c=0;
	printf("enter no of elements:");
	scanf("%d",&n);
	printf("enter the key to search:");
	scanf("%d",&s);
	int a[n],i;
	printf("enter array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==s)
		{
			printf("element found at %d index",i);
			c++;
			break;
		}
	}
	if(c==0)
	{
		printf("element not found");
	}
}
