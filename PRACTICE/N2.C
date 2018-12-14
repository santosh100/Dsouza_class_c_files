#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *p;
	int no;
	char fname[20];
	clrscr();
	printf("\n Enter file name to open: ");
	gets(fname);
	p=fopen(fname,"r");
	if(p==NULL)
	{
		printf("\n this file dose no exist: ");
		return;
	}
	printf("\n the contents of the file are: \n");
	while((no=getw(p))!=EOF)
	{
		printf("\n %d",no);
	}
	fclose(p);
	getch();

}