#include<stdio.h>
#include<conio.h>
#include<alloc.h>
int**myplace(int r,int c)
{
	int **t,i;
	t=(int**)calloc(r+1,sizeof(int));
	for(i=0;i<=r;i++)
	    *(t+i)=(int*)calloc(c+1,sizeof(int));
	return(t);
}
void input(int**pa,int r,int c,int x,int y)
{
	int i,j,t=x;
	for(i=0;i<r;i++,y+=2)
	{   *(*(pa+i)+c)=0;
	    for(j=0,x=t;j<c;j++,x+=5)
	    {
		gotoxy(x,y);
		scanf("%d",*(pa+i)+j);
		*(*(pa+i)+c)+=*(*(pa+i)+j);
	    }
	    gotoxy(x,y);
	    printf("%d",*(*(pa+i)+c));
	}
    //	y+=2;
	for(j=0,x=t;j<=r;j++,x+=5)
	{
	    *(*(pa+j)+r)=0;
	    for(i=0;i<c;i++)
		*(*(pa+j)+r)+=*(*(pa+i)+j);
	    gotoxy(x,y);
	    printf("%d",*(*(pa+j)+r));
	}
}
void main()
{
	int **a,r,c;
	clrscr();
	printf("\n Enter Rows and Columns of a Matrix: \n");
	scanf("%d%d",&r,&c);
	a=myplace(r,c);
	printf("\n Enter %d,%d Matrix: ",r,c);
	input(a,r,c,5,7);
}