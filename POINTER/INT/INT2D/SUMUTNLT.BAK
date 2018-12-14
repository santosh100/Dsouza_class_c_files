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
void sumutnlt(int**pa,int r,int c,int x,int y)
{
	int i,j,t=x,ut=0,lt=0;
	for(i=0;i<r;i++,y+=2)
	{
	    for(j=0,x=t;j<c;j++,x+=5)
	    {
		gotoxy(x,y);
		scanf("%d",*(pa+i)+j);
		if(j<=i)
		    lt+=*(*(pa+i)+j);
		if(j>=i)
		    ut+=*(*(pa+i)+j);
	    }
	}
	 printf("\n sum of upper triangle = %d \n sum of lower triangle = %d ",ut,lt);
}
void main()
{
	int**a,r,c;
	clrscr();
	printf("\n Enter Rows and Columns of a matrix: \n");
	scanf("%d%d",&r,&c);
	a=myplace(r,c);
	printf("\n Enter %d,%d Matrix:",r,c);
	sumutnlt(a,r,c,5,7);
}