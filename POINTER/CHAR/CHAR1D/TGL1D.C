#include<stdio.h>
#include<conio.h>
#include<alloc.h>
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
	for(i=0;*(n+i)!='\0';i++)
	{
		if(islower(*(n+i)))
		    *(n+i)=toupper(*(n+i));
		else
		    if(isupper(*(n+i)))
			*(n+i)=tolower(*(n+i));
	}
	printf("\n Togglecase = %s",n);
}