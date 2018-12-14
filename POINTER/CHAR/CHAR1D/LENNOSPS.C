#include<stdio.h>
#include<conio.h>
#include<alloc.h>
#include<ctype.h>
void main()
{
	char *n;
	int i,j,x;
	clrscr();
	printf("\n Enter size of pointer: ");
	scanf("%d",&x);
	n=(char*)calloc(x,sizeof(char));
	printf("\n Enter string: ");
	fflush(stdin);
	gets(n);
	for(i=0,j=0;*(n+i)!='\0';i++)
	{
		if(isspace(*(n+i)));
		else
		    j++;
	}
	printf("\n length without counting space = %d",j);
}