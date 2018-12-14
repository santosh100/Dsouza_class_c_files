#include<stdio.h>
#include<conio.h>
#include<alloc.h>
int**myplace(int r,int c)
{
	int**t,i;
	t=(int**)calloc(r,sizeof(int));
	for(i=0;i<r;i++)
	    *(t+i)=(int*)calloc(c,sizeof(int));
	return(t);
}
void sumftnbt(int**a,int r,int c,int x,int y)
{
	int i,j,t=x,ft=0,bt=0;
	for(i=0;i<r;i++,y+=2)
	{
	    for(j=0,x=t;j<c;j++,x+=5)
	    {
		gotoxy(x,y);
		scanf("%d",*(a+i)+j);
		if((i+j)<r)
		    ft+=*(*(a+i)+j);
		if((i+j)>=(r-1))
		    bt+=*(*(a+i)+j);
	    }
	}
	printf("\n front triangle = %d \n back triangle = %d",ft,bt);
}
void main()
{
	int**a,r,c;
	clrscr();
	printf("\n Enter Rows and Columns of a Matrix: ");
	scanf("%d%d",&r,&c);
	a=myplace(r,c);
	printf("\n Enter %d,%d matrix: ",r,c);
	sumftnbt(a,r,c,5,7);
}