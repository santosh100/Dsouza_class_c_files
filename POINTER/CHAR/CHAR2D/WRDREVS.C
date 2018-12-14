#include<stdio.h>
#include<conio.h>
#include<alloc.h>
char**myplace(int r, int c)
{
	char**t;
	int i;
	t=(char**)calloc(r,sizeof(char));
	for(i=0;i<r;i++)
	    *(t+i)=(char*)calloc(c,sizeof(char));
	return(t);
}
void wrdrevs(char**pa,char**pb,int r)
{
	int i,j,k,p,l;
	printf("\n Enter %d strings: \n",r);
	for(i=0;i<r;i++)
	{
	    fflush(stdin);
	    gets(*(pa+i));
	    for(j=0,l=0,p=0;*(*(pa+i)+j)!='\0';j++)
	    {
		if(*(*(pa+i)+j)==' '||*(*(pa+i)+j+1)=='\0')
		{
		    for(k=j;k>=p;k--,l++)
			*(*(pb+i)+l)=*(*(pa+i)+k);
			*(*(pb+i)+l++)=' ';
		    p=j;
		}
	    }
	    *(*(pb+i)+l)='\0';
	}
}
void print(char**pb,int r)
{
	int i;
	for(i=0;i<r;i++)
	printf("\n %s",*(pb+i));
}
void main()
{
	char**a,**b;
	int r,c;
	clrscr();
	printf("\n Enter number of Rows and Columns: ");
	scanf("%d%d",&r,&c);
	a=myplace(r,c);
	b=myplace(r,c);
	wrdrevs(a,b,r);
	print(b,r);
}