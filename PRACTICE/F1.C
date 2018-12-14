#include<stdio.h>
#include<conio.h>
void main()
{
	char a;
	FILE *fp;
	clrscr();
	fp=fopen("abc.txt","a");
	printf("\n Enter data,to save press ctr+Z or F6\n");
	while((a=getchar())!=EOF)
	    putc(a,fp);
	    fclose(fp);
	fp=fopen("abc.txt","r");
	printf("\n the contents of abc.txt \n ");
	while((a=getc(fp))!=EOF)
	    putchar(a);
	    fclose(fp);
}