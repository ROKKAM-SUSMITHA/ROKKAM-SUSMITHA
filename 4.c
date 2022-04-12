#include<stdio.h>
main()
{
	FILE *fp1=fopen("Four.txt","w+");
	int c,sum=0,i;
	for(i=0;i<5;i++)
	{
		scanf("%d",&c);
		putw(c,fp1);
	}
	fseek(fp1,0,SEEK_SET);
	while((c=getw(fp1))!=EOF)
	{
		printf("%d\n",c);
		sum=sum+c;
	}
	putw(sum,fp1);
	printf("successful:%d",sum);
	fclose(fp1);
	
}
