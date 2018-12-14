#include<stdio.h>
#include<conio.h>
#include<alloc.h>
#include<ctype.h>
#include<string.h>
void main()
{
	char *n;
	int i,l,x;
	clrscr();
	printf("\n Enter size of pointer: ");
	scanf("%d",&x);
	n=(char*)calloc(x,sizeof(char));
	printf("\n Enter name: ");
	fflush(stdin);
	gets(n);
	printf("\n name = %s",n);
	l=strlen(n);
	printf("\n length = %d",l);
	strrev(n);
	printf("\n name in reverse: %s",n);
	getch();
}