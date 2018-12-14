#include<stdio.h>
#include<conio.h>
#include<alloc.h>
char **myplace(int r,int c)
{
	char**t;
	int i;
	t=(char**)malloc(r*sizeof(char));
	for(i=0;i<r;i++)
	    *(t+i)=(char*)malloc(c*sizeof(char));
	return(t);
}
void countwrd(char**pa,int r)
{
	int i,j,ctr=0;
	for(i=0;i<r;i++)
	{
	     for(j=0;*(*(pa+i)+j)!='\0';j++)
	     {
		if(*(*(pa+i)+j)==' '||*(*(pa+i)+j+1)=='\0')
			ctr++;
	     }
	}
	printf("\n Total words = %d",ctr);
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
	countwrd(a,r);
}