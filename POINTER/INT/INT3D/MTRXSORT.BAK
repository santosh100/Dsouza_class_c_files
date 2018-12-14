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
	    {
		*(*(t+i)+j)=(int*)calloc(c,sizeof(int));
	    }
	}
	return(t);
}
int *input(int***a,int*t,int m,int r,int c,int x,int y)
{
	int i,j,k,p=x,l=0;
	for(i=0;i<m;i++,y+=2)
	{
	    for(j=0;j<r;j++,y++)
	    {
		for(k=0,x=p;k<c;k++,x+=5)
		{
			gotoxy(x,y);
			scanf("%d",*(*(a+i)+j)+k);
			*(t+l++)=*(*(*(a+i)+j)+k);
		}
	    }
	}
	return(t);
}
int *sort(int*s,int p)
{
	int i,j,l,t;
	for(i=0;i<p-1;i++)
	{
	    for(j=0;j<((p-1)-i);j++)
	    {
		if(*(s+j)>*(s+j+1))
		{
			t=*(s+j);
			*(s+j)=*(s+j+1);
			*(s+j+1)=t;
		}
	    }
	}
	return(s);
}
void print(int ***a,int*s,int m,int r,int c,int x,int y)
{
	int i,j,k,p=x,l=0;
	textcolor(5);
	for(i=0;i<m;i++,y+=2)
	{
	    for(j=0;j<r;j++,y++)
	    {
		for(k=0,x=p;k<c;k++,x+=5)
		{
			*(*(*(a+i)+j)+k)=*(s+l++);
			gotoxy(x,y);
			cprintf("%d",*(*(*(a+i)+j)+k));
			delay(1000);
		}
	    }
	}
}
void main()
{
	int***a,m,r,c,*t;
	clrscr();
	printf("\n Enter Numbers of Moduls,Rows and Columns:\n");
	scanf("%d%d%d",&m,&r,&c);
	a=myplace(m,r,c);
	t=(int*)calloc(m*r*c,sizeof(int));
	printf("\n Enter %d matrices of %d , %d",m,r,c);
	t=input(a,t,m,r,c,5,8);
	t=sort(t,m*r*c);
	print(a,t,m,r,c,40,8);
}
