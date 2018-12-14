#include<stdio.h>
#include<conio.h>
#include<alloc.h>
#include<string.h>
char**myplace(int r,int c)
{
	char**t;
	int i;
	t=(char**)calloc(r,sizeof(char));
	for(i=0;i<r;i++)
	    *(t+i)=(char*)calloc(c,sizeof(char));
	return(t);
}
void largest(char**pa,int r)
{
	int i,j,k;
	for(i=0,j=0,k=0;i<r;i++)
	{
	    if(strlen(*(pa+i))<strlen(*(pa+j)))
			j=i;
	    else
		if(strlen(*(pa+i))>strlen(*(pa+k)))
			k=i;
	}
	printf("\n largest string = %s \n smallest string = %s ",*(pa+k),*(pa+j));
}
void main()
{
	char**a;
	int r,c,i;
	clrscr();
	printf("\n Enter number of Rows and Columns: ");
	scanf("%d%d",&r,&c);
	a=myplace(r,c);
	printf("\n Enter %d strings: ",r);
	for(i=0;i<r;i++)
	{
	    fflush(stdin);
	    gets(*(a+i));
	}
	largest(a,r);
}