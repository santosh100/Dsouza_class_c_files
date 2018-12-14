#include<stdio.h>
#include<conio.h>
#include<alloc.h>
#include<string.h>
#include<ctype.h>
char**myplace(int r,int c)
{
	char**t;
	int i;
	t=(char**)calloc(r,sizeof(char));
	for(i=0;i<r;i++)
	  *(t+i)=(char*)calloc(c,sizeof(char));
	return(t);
}
void title(char**pa,int r)
{
	int i,j,p;
	printf("\n Enter %d strings: \n",r);
	for(i=0;i<r;i++)
	{
	    fflush(stdin);
	    gets(*(pa+i));
	    strlwr(*(pa+i));
	    *(*(pa+i)+0)=toupper(*(*(pa+i)+0));
	    for(j=1;*(*(pa+i)+j)!='\0';j++)
	    {
		if(*(*(pa+i)+j)==' ')
		{
		    j++;
		    *(*(pa+i)+j)=toupper(*(*(pa+i)+j));
		}
	    }
	}
}
void print(char**pa,int r)
{
	int i;
	for(i=0;i<r;i++)
	{
	    printf("\n %s",*(pa+i));
	}
}
void main()
{
	char**a;
	int r,c;
	clrscr();
	printf("\n Enter number of Rows and Columns: ");
	scanf("%d%d",&r,&c);
	a=myplace(r,c);
	title(a,r);
	print(a,r);
}