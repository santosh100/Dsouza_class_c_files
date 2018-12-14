#include<stdio.h>
#include<conio.h>
#include<alloc.h>
int**myplace(int r,int c)
{
	int **t,i;
	t=(int**)calloc(r,sizeof(int));
	for(i=0;i<r;i++)
	    *(t+i)=(int*)calloc(c,sizeof(int));
	return(t);
}
void transpose(int**pa,int**pb,int r,int c,int x,int y)
{
	int i,j,t=x;
	for(i=0;i<r;i++,y+=2)
	{
	    for(j=0,x=t;j<c;j++,x+=5)
	    {
		gotoxy(x,y);
		scanf("%d",*(pa+i)+j);
		*(*(pb+j)+i)=*(*(pa+i)+j);
	    }
	}
}
void print(int**pb,int r,int c,int x,int y)
{
	int i,j,t=x;
	for(i=0;i<r;i++,y+=2)
	{
	    for(j=0,x=t;j<c;j++,x+=5)
	    {
		gotoxy(x,y);
		printf("%d",*(*(pb+i)+j));
	    }
	}
}
void main()
{
	int **a,**b,r,c;
	clrscr();
	printf("\n Enter Rows and Columns of a Matrix: \n");
	scanf("%d%d",&r,&c);
	a=myplace(r,c);
	b=myplace(c,r);
	printf("\n Enter %d,%d Matrix: ",r,c);
	transpose(a,b,r,c,5,8);
	print(b,c,r,40,8);
}