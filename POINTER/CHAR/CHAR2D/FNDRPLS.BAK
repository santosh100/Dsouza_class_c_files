#include<stdio.h>
#include<conio.h>
#include<alloc.h>
char **myplace(int r,int c)
{
	char**t;
	int i;
	t=(char**)calloc(r,sizeof(char));
	for(i=0;i<r;i++)
	    *(t+i)=(char*)calloc(c,sizeof(char));
	return(t);
}
void fndrpls(char**pa,int r)
{
	char f,re;
	int i,j;
	printf("\n Enter character to find: ");
	fflush(stdin);
	f=getchar();
	printf("\n Enter character to replace: ");
	fflush(stdin);
	re=getchar();
	for(i=0;i<r;i++)
	{
	    for(j=0;*(*(pa+i)+j)!='\0';j++)
	    {
		if(*(*(pa+i)+j)==f)
		    *(*(pa+i)+j)=re;
	    }
	    printf("\n %s",*(pa+i));
	}
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
	fndrpls(a,r);
}