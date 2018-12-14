			/* by bubble sort */
#include<stdio.h>
#include<conio.h>
#include<alloc.h>
#include<dos.h>
int**myplace(int r ,int c)
{
	int**t,i;
	t=(int**)calloc(r,sizeof(int));
	for(i=0;i<r;i++)
	   *(t+i)=(int*)calloc(c,sizeof(int));
	return(t);
}
void input(int**a,int r,int c,int x,int y)
{
	int i,j,t=x;
	for(i=0;i<r;i++,y+=2)
	{
	    for(j=0,x=t;j<c;j++,x+=5)
	    {
		gotoxy(x,y);
		scanf("%d",*(a+i)+j);
	    }
	}
}
void rsort(int**pa,int r,int c)
{
	int i,j,t,k;
	for(i=0;i<r;i++)
	{
	    for(k=0;k<(c-1);k++)
	    {
		for(j=0;j<(c-1)-k;j++)
		{
		    if(*(*(pa+i)+j)>*(*(pa+i)+j+1))
		    {
				t=*(*(pa+i)+j);
			*(*(pa+i)+j)=*(*(pa+i)+j+1);
			*(*(pa+i)+j+1)=t;
		    }
		}
	    }
	}
}
void print(int**pa,int r,int c,int x,int y)
{
	int i,j,t=x;
	for(i=0;i<r;i++,y+=2)
	{
		if(i%2==0)
		    textcolor(1);
		else
		    textcolor(2);
	    for(j=0,x=t;j<c;j++,x+=5)
	    {
		gotoxy(x,y);
		sound(j*250);
		cprintf("%d",*(*(pa+i)+j));
		delay(1000);
	    }
	}
	nosound();
}
void main()
{
	int**a,r,c;
	clrscr();
	printf("\n Enter Rows and Columns of a Matrix: \n");
	scanf("%d%d",&r,&c);
	a=myplace(r,c);
	printf("\n Enter %d,%d matrix :",r,c);
	input(a,r,c,5,8);
	rsort(a,r,c);
	print(a,r,c,40,8);
}