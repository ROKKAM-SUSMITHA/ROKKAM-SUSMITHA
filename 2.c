#include<stdio.h>
main()
{
	FILE *fp1,*fp2;
	char c1,c2;
	int res;
	fp1=fopen("One.txt","r");
	fp2=fopen("Two.txt","r");
	while((c1=fgetc(fp1))!=EOF && (c2=fgetc(fp2))!=EOF)
	{
		//printf("%c %c\n",c1,c2);
		if(c1!=c2)
		{
			printf("%d",1);
			return;
		}
	}
	if(c1!=EOF || (c2=fgetc(fp2))!=EOF)
	{
		//printf("%c %c\n",c1,c2);
		printf("%d",1);
		return;
	}
	printf("%d",0);
	
}
