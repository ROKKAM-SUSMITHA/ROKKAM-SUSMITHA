#include<stdio.h>
main()
{
	FILE *fp;
	fp=fopen("five.txt","w");
	int i,sum=0,c,n;
	char s[10];
	for(i=0;i<2;i++)
	{
		printf("enter product id:");
		scanf("%s",s);
		fprintf(fp,"Product Code:%s\n",s);
		printf("enter cost");
		scanf("%d",&c);
		fprintf(fp,"product cost:");
		putw(c,fp);
		printf("number of available:");
		scanf("%d",&n);
		fprintf(fp,"available:");
		putw(n,fp);
	}
	fseek(fp,0,SEEK_SET);
	printf("%d",ftell(fp));
	for(i=0;i<2;i++)
	{
				
		sum=sum+c1*c2;
		printf("%d %d\n",c1,c2);
	}
	printf("successful:%d",sum);
	
}
