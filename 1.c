#include<stdio.h>
void main()
{
	FILE *fp;
	fp=fopen("One.txt","w");
	fprintf(fp,"This is the text %d file",1);
	fclose(fp);
	fp=fopen("One.txt","r");
	FILE *fp1;
	fp1=fopen("Two.txt","w");
	char c=fgetc(fp);
	while(c!=EOF)
	{
		putc(c,fp1);
		c=fgetc(fp);
	}
	printf("successful");
}
