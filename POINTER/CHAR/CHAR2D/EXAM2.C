#include<stdio.h>
#include<conio.h>
#include<alloc.h>
char **myspace(int r,int c)
{
	char**t;
	int i;
	t=(char**)malloc(r*sizeof(char));
	for(i=0;i<r;i++)
	    *(t+i)=(char*)calloc(c,sizeof(char));
	return(t);
}
void input(char**pa,int r)
{
	int i;
	printf("\n Enter %d strings:\n ",r);
	for(i=0;i<r;i++)
	{
	    fflush(stdin);
	    gets(*(pa+i));
	}
}
void fndtimes(char**pa,int r)
{
	int i,j,ctr;
	char f;
	printf("\n Enter any character to find: ");
	fflush(stdin);
	f=getchar();
	for(ctr=0,i=0;i<r;i++)
	{
	    for(j=0;*(*(pa+i)+j)!='\0';j++)
	    {
		if(*(*(pa+i)+j)==f)
		    ctr++;
	    }
	}
	printf("%c found %d times",f,ctr);

}
void main()
{
	char**a;
	int i,j,r,c,f;
	clrscr();
	printf("\n Enter Number of Rows and Columns: ");
	scanf("%d%d",&r,&c);
	a=myspace(r,c);
	input(a,r);
	fndtimes(a,r);
}