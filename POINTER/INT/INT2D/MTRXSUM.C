#include<stdio.h>
#include<conio.h>
#include<alloc.h>
#include<dos.h>
int **myplace(int r,int c)
{
	int**t,i;
	t=(int**)calloc(r,sizeof(int));
	for(i=0;i<r;i++)
	    *(t+i)=(int*)calloc(c,sizeof(int));
	return(t);
}
void input(int**pa,int r,int c,int x,int y)
{
	int i,j,t=x;
	for(i=0;i<r;i++,y+=2)
	{
	    for(j=0,x=t;j<c;j++,x+=5)
	    {
		gotoxy(x,y);
		scanf("%d",*(pa+i)+j);
	    }
	}
}
void sum(int**a,int**b,int**d,int r,int c,int x,int y)
{
	int i,j,t=x;
	textcolor(3);
	for(i=0;i<r;i++,y+=2)
	{
	    for(j=0,x=t;j<c;j++,x+=5)
	    {
		*(*(d+i)+j)=*(*(a+i)+j)+*(*(b+i)+j);
		gotoxy(x,y);
		cprintf("%d",*(*(d+i)+j));
		delay(1000);
	    }
	}
}
void main()
{
	int **a,**b,**d,r,c;
	clrscr();
	printf("\n Enter Rows and Columns of a Matrix: \n ");
	scanf("%d%d",&r,&c);
	a=myplace(r,c);
	b=myplace(r,c);
	d=myplace(r,c);
	printf("\n Enter 2 matrices:");
	input(a,r,c,5,7);
	input(b,r,c,40,7);
	sum(a,b,d,r,c,25,18);
}