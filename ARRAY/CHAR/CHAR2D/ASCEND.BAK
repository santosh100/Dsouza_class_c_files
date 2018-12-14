#include<stdio.h>
#include<conio.h>
#include<alloc.h>
#include<string.h>
char**myplace(int r,int c)
{
	char**t;
	int i;
	t=(char**)malloc(r*sizeof(char));
	for(i=0;i<r;i++)
	    *(t+i)=(char*)malloc(c*sizeof(char));
	return(t);
}
void ascend(char**pa,int r,int c)
{
	char*t;
	int i,j,x;
	t=(char*)calloc(c,sizeof(char));
	for(i=0;i<r-1;i++)
	{
	     for(j=0;j<(r-1)-i;j++)
	     {
		 x=strcmpi(*(pa+j),*(pa+j+1));
		 if(x>0)
		 {
		     strcpy(t,*(pa+j));
		     strcpy(*(pa+j),*(pa+j+1));
		     strcpy(*(pa+j+1),t);
		 }
	     }
	}
}
void print(char**pa,int r)
{
	int i;
	printf("\n Printing Ascending Order: \n");
	for(i=0;i<r;i++)
	    printf("\n %s",*(pa+i));
}
void main()
{
	char**a;
	int i,r,c;
	clrscr();
	printf("\n Enter number of Rows and Columns: ");
	scanf("%d%d",&r,&c);
	a=myplace(r,c);
	printf("\n Enter %d strings: \n ",r);
	for(i=0;i<r;i++)
	{
		fflush(stdin);
		gets(*(a+i));
	}
	ascend(a,r,c);
	print(a,r);
}