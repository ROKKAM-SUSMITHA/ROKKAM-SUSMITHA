#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b,ch;
	while(1)
	{
		printf("\n1.addition\n2.subtraction\n3.multiplication\n4.division\n5.exit\n");
		printf("enter your choice:");
		scanf("%d",&ch);
		if(ch!=5)
		{
			printf("enter the numbers:");
			scanf("%d %d",&a,&b);
		}
		switch(ch)
		{
			case 1:
				printf("addition of two numbers:%d",a+b);
				break;
			case 2:
				printf("subtraction of two numbers:%d",a-b);
				break;
			case 3:
				printf("multiplication of two numbers:%d",a*b);
				break;
			case 4:
				printf("division of two numbers:%d",a/b);
				break;
			case 5:
				exit(0);
		}
	}
}
