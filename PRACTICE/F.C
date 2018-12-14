#include<stdio.h>
#include<conio.h>
void main()
{
	char a,fname[20];
	FILE *fp;
	clrscr();
	printf("\n Enter file name to open: ");
	scanf("%s",fname);
	fp=fopen(fname,"r+");
	fseek(fp,0,0);
	printf("\n Enter data,to save press ctr+Z or F6\n");
	while((a=getchar())!=EOF)
	    putc(a,fp);
	fclose(fp);
	fp=fopen(fname,"r");
	printf("\n the contents of the file are: \n");
	while((a=getc(fp))!=EOF)
	    putchar(a);
	fclose(fp);
}