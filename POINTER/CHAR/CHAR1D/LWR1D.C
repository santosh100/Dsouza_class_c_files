#include<stdio.h>
#include<conio.h>
#include<alloc.h>
#include<string.h>
void main()
{
	char *n;
	int x;
	clrscr();
	printf("\n Enter size of pointer: ");
	scanf("%d",&x);
	n=(char*)calloc(x,sizeof(char));
	printf("\n Enter string: ");
	fflush(stdin);
	gets(n);
	strlwr(n);
	printf("\n lowercase = %s",n);
}