#include<stdio.h>
#include<stdio.h>
void main()
{
	int n[3][3];
	int i,j,x,y,ut=0,lt=0;
	clrscr();
	printf("\n Enter 3*3 matrix:");
	for(y=3,i=0;i<3;i++,y+=2)
	{
	    for(x=5,j=0;j<3;j++,x+=5)
	    {
		gotoxy(x,y);
		scanf("%d",&n[i][j]);
		if(j<=i)
		   lt+=n[i][j];
		if(j>=i)
		   ut+=n[i][j];
	    }
	}
	printf("\n sum of upper triangle = %d\n sum of lower triangle = %d",ut,lt);
}