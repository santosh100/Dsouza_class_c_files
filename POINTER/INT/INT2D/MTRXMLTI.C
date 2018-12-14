#include<stdio.h>
#include<conio.h>
#include<alloc.h>
#include<dos.h>
int **myplace(int r,int cl)
{
	int **t,i;
	t=(int**)calloc(r,sizeof(int));
	for(i=0;i<r;i++)
	    *(t+i)=(int*)calloc(cl,sizeof(int));
	return(t);
}
void input(int **a,int r,int cl,int x,int y)
{
	int i,j,t=x;
	for(i=0;i<r;i++,y+=2)
	{
	    for(j=0,x=t;j<cl;j++,x+=5)
	    {
		gotoxy(x,y);
		scanf("%d",*(a+i)+j);
	    }
	}
}
void mtrxmlti(int**a,int**b,int**c,int r)
{
	int i,j,k;
	for(i=0;i<r;i++)
	{
	    for(j=0;j<r;j++)
	    {
		for(k=0;k<r;k++)
		    *(*(c+i)+j)+=*(*(a+i)+k)**(*(b+k)+j);
	    }
	}
}
void print(int**c,int r,int cl,int x,int y)
{
	int i,j,t=x;
	textcolor(4);
	for(i=0;i<r;i++,y+=2)
	{
	    for(j=0,x=t;j<cl;j++,x+=5)
	    {
		gotoxy(x,y);
		cprintf("%d",*(*(c+i)+j));
		delay(1000);
	    }
	}
}
void main()
{
	int **a,**b,**c,r,cl;
	clrscr();
	printf("\n Enter Rows and Columns of Matrix:\n ");
	scanf("%d%d",&r,&cl);
	a=myplace(r,cl);
	b=myplace(r,cl);
	c=myplace(r,cl);
	printf("\n Entrer 2 matrices: ");
	input(a,r,cl,5,7);
	input(b,r,cl,40,7);
	mtrxmlti(a,b,c,r);
	print(c,r,cl,25,18);
}