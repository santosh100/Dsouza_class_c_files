#include<stdio.h>
#include<conio.h>
#include<alloc.h>
#include<ctype.h>
void main()
{
	char *n,*m;
	int i,j,p,x;
	clrscr();
	printf("\n Enter size of pointer: ");
	scanf("%d",&x);
	n=(char*)calloc(x,sizeof(char));
	m=(char*)calloc(x,sizeof(char));
	printf("\n Enter string: ");
	fflush(stdin);
	gets(n);
	*(m+0)=toupper(*(n+0));
	for(i=1,j=1,p=0;*(n+i)!='\0';i++)
	{
	    if(*(n+i)==' ')
	    {
		*(m+j++)='.';
		i++;
		*(m+j++)=toupper(*(n+i));
		p=i+1;
	    }
	    else
		if(*(n+i+1)=='\0')
		{
		    while(*(n+p)!='\0')
		    *(m+j++)=tolower(*(n+p++));
		}
	}
	*(m+j)='\0';
	printf("\n Initial surname = %s",m);
}