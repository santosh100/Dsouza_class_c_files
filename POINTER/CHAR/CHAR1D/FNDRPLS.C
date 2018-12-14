#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	char *n,x,y;
	int i,a;
	clrscr();
	printf("\n Enter size of pointer: ");
	scanf("%d",&a);
	n=(char*)calloc(a,sizeof(char));
	printf("\n Enter string: ");
	fflush(stdin);
	gets(n);
	printf("\n Enter character to find: ");
	x=getchar();
	printf("\n Enter character to replace: ");
	fflush(stdin);
	y=getchar();
	for(i=0;*(n+i)!='\0';i++)
	{
		if(*(n+i)==x)
		    *(n+i)=y;
	}
	printf("\n Replaced string = %s",n);
}