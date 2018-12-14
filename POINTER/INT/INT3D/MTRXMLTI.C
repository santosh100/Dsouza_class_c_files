#include<stdio.h>
#include<conio.h>
#include<alloc.h>
#include<dos.h>
int ***myplace(int m,int r,int c)
{
	int ***t,i,j;
	t=(int***)calloc(m,sizeof(int));
	for(i=0;i<m;i++)
	{
	    *(t+i)=(int**)calloc(r,sizeof(int));
	    for(j=0;j<r;j++)
		*(*(t+i)+j)=(int*)calloc(c,sizeof(int));
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
void multi(int***a,int m,int r,int c)
{
	int i,j,k;
	for(i=0;i<r;i++)
	{
	    for(j=0;j<c;j++)
	    {
		*(*(*(a+(m-1))+i)+j)=0;
		for(k=0;k<r;k++)
		*(*(*(a+(m-1))+i)+j)+=*(*(*(a+0)+i)+k)**(*(*(a+1)+k)+j);
	    }
	}
}
void print(int ***a,int m,int r,int c,int x,int y)
{
	int j,k,t=x;
	textcolor(3);
	for(j=0;j<r;j++,y+=2)
	{
	    for(k=0,x=t;k<c;k++,x+=5)
	    {
		gotoxy(x,y);
	       cprintf("%d",*(*(*(a+m)+j)+k));
	       delay(1000);
	    }
	}
}
void main()
{
	int ***a,r,c,m;
	clrscr();
	printf("\n Enter number of modul,Rows and columns: \n");
	scanf("%d%d%d",&m,&r,&c);
	a=myplace(m,r,c);
	printf("\n Enter %d matrix of %d,%d  :",m-1,r,c);
	input(a,m-1,r,c,5,8);
	multi(a,m,r,c);
	print(a,m-1,r,c,40,8);
}
