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
void fdandbd(int**a,int r,int c,int x, int y)
{
	int i,j,t=x,fd=0,bd=0;
	for(i=0;i<r;i++,y+=2)
	{
	    for(j=0,x=t;j<c;j++,x+=5)
	    {
		gotoxy(x,y);
		scanf("%d",*(a+i)+j);
		if(i==j)
		    fd+=*(*(a+i)+j);
		if((i+j)==(r-1))
		    bd+=*(*(a+i)+j);
	    }
	}
	printf("\n sum of front diagonal = %d \n sum of back diagonal = %d ",fd,bd);
}
void main()
{
	int **a,r,c;
	clrscr();
	printf("\n Enter Rows and Columns of a Matrix: \n");
	scanf("%d%d",&r,&c);
	a=myplace(r,c);
	printf("\n Enter %d,%d Matrix: ",r,c);
	fdandbd(a,r,c,5,7);
}
