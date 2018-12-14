			   /* by linear sort */
#include<stdio.h>
#include<conio.h>
#include<alloc.h>
#include<dos.h>
int **myplace(int r,int c)
{
	int **t,i;
	t=(int**)malloc(r*sizeof(int));
	for(i=0;i<r;i++)
	    *(t+i)=(int*)malloc(c*sizeof(int));
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
void csort(int**pa,int r,int c,int x,int y)
{
	int i,j,k,t,s=y;
	for(i=0;i<c;i++,x+=5)
	{
		if(i%2==0)
		    textcolor(YELLOW);
		else
		    textcolor(RED);
	    for(j=0,y=s;j<r;j++,y+=2)
	    {
		for(k=j+1;k<r;k++)
		{
		    if(*(*(pa+j)+i)>*(*(pa+k)+i))
		    {
			t=*(*(pa+j)+i);
			*(*(pa+j)+i)=*(*(pa+k)+i);
			*(*(pa+k)+i)=t;
		    }
		}
		gotoxy(x,y);
		sound(j*200);
		cprintf("%d",*(*(pa+j)+i));
		delay(1000);
	    }
	}
	nosound();
}
void main()
{
	int **a,r,c;
	clrscr();
	printf("\n Enter Rows and Columns of a Matrix: \n");
	scanf("%d%d",&r,&c);
	a=myplace(r,c);
	printf("\n Enter %d,%d Matrix:",r,c);
	input(a,r,c,5,7);
	csort(a,r,c,40,7);
}