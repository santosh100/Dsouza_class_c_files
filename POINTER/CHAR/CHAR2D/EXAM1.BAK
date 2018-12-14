#include<stdio.h>
#include<conio.h>
#include<alloc.h>
#include<string.h>
char **myspace(int r,int c)
{
	int i;
	char**t;
	t=(char**)calloc(r,sizeof(char));
	for(i=0;i<r;i++)
	    *(t+i)=(char*)calloc(c,sizeof(char));
	return(t);
}
void input(char**pa,int r,int x, int y)
{
	int i;
	printf("\n Enter %d strings: ",r);
	for(i=0;i<r;i++,y+=2)
	{
		gotoxy(x,y);
		fflush(stdin);
		gets(*(pa+i));
	}
}
void print(char**pa,int r, int x, int y)
{
	int i,j;
	for(i=0;i<r;i++,y+=2)
	{
		strupr(*(pa+i));
		gotoxy(x,y);
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
	a=myspace(r,c);
	input(a,r,5,7);
	print(a,r,5,13);

}
