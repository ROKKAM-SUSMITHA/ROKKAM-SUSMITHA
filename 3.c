#include<stdio.h>
main()
{
	FILE *f1,*f2;
	f1=fopen("Two.txt","a");
	f2=fopen("One.txt","r");
	char c;
	while((c=fgetc(f2))!=EOF)
	{
		fputc(c,f1);
	}
	printf("successful");
}
