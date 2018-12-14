#include<stdio.h>
#include<conio.h>
#include<alloc.h>
#include<dos.h>
int ***myplace(int m,int r,int c)
{
	int ***t,i,j;
	t=(int***)malloc(m*sizeof(int));
	for(i=0;i<m;i++)
	{
	    *(t+i)=(int**)malloc(r*sizeof(int));
	    for(j=0;j<r;j++)
		*(*(t+i)+j)=(int*)malloc(c*sizeof(int));
	}
	return(t);
}
void input(int ***a,int m,int r,int c,int x,int y)
{
	int i,j,k,t=x;
	for(i=0;i<m;i++,y+=1.5)
	{
	    for(j=0;j<r;j++,y++)
	    {
		for(k=0,x=t;k<c;k++,x+=5)
		{
		    gotoxy(x,y);
		    scanf("%d",*(*(a+i)+j)+k);
		}
	    }
	}
}
void add(int ***a,int m,int r,int c)
{
	int i,j,k;
	for(i=0;i<r;i++)
	{
	    for(j=0;j<c;j++)
	    {
		*(*(*(a+m-1)+i)+j)=0;
		for(k=0;k<m-1;k++)
		   *(*(*(a+m-1)+i)+j)+=*(*(*(a+k)+i)+j);
	    }
	}
}
void print(int ***a,int m,int r,int c,int x,int y)
{
	int i,j,t=x;
	textcolor(2);
	for(i=0;i<r;i++,y+=2)
	{
	    for(j=0,x=t;j<c;j++,x+=5)
	    {
		gotoxy(x,y);
		cprintf("%d",*(*(*(a+m)+i)+j));
		delay(1000);
	    }
	}
}
void main()
{
	int ***a,m,r,c;
	clrscr();
	printf("\n Enter number of Module, Rows and Columns: \n");
	scanf("%d%d%d",&m,&r,&c);
	a=myplace(m,r,c);
	printf("\n Enter %d matrix of %d,%d  :",m-1,r,c);
	input(a,m-1,r,c,5,8);
	add(a,m,r,c);
	print(a,m-1,r,c,40,8);
}