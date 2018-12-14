#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *p1;
	int no;
	char fname[8];
	printf("\n enter file to open: ");
	scanf("%s",fname);
	p1=fopen(fname,"r");
	if(p1==NULL)
	{
		printf("\n File not found");
		return;
	}
	while((no=getw(p1))!=EOF)
	{
		printf("%5d",no);
	}
	fclose(p1);
	getch();
}