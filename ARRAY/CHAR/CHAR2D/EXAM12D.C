#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char n[5][20];
	int i;
	clrscr();
	printf("\n Enter 5 strings: ");
	for(i=0;i<5;i++)
		gets(n[i]);
	for(i=0;i<5;i++)
	{
		strupr(n[i]);
		printf("\n %s",n[i]);
	}
}