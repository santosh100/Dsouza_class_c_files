#include<stdio.h>
#include<conio.h>
#include<alloc.h>
#include<string.h>
#include<ctype.h>
void main()
{
	char *n;
	int i,x;
	clrscr();
	printf("\n Enter size of pointer: ");
	scanf("%d",&x);
	n=(char*)calloc(x,sizeof(char));
	printf("\n Enter string: ");
	fflush(stdin);
	gets(n);
	strlwr(n);
	for(i=0;*(n+i)!='\0';i++)
	{
	    if(i==0)
		*(n+i)=toupper(*(n+i));
	    else
		if(*(n+i)==' ')
		{
		    i++;
		    *(n+i)=toupper(*(n+i));
		}
	}
	printf("\n Titlecase = %s",n);
}