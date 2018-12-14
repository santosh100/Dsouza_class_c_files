#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3][3][3];
	int i,j,k,x=5,y=3;
	clrscr();
	printf("\n Enter two matrix of 3*3");
	for(k=0;k<2;k++,y+=2)        // number of module
	{
	    for(i=0;i<3;i++,y++)      //number of row
	    {
		for(x=5,j=0;j<3;j++,x+=5)     //number of column
		{
		    gotoxy(x,y);
		    scanf("%d",&a[k][i][j]);
		}
	    }
	}
	for(i=0;i<3;i++,y++)
	{
	    for(x=5,k=0;k<3;k++,x+=5)
	    {
		a[2][i][k]=0;
		for(j=0;j<3;j++)
		a[2][i][k]+=a[0][i][j]*a[1][j][k];
		gotoxy(x,y);
		printf("%d",a[2][i][k]);
	    }
	}
}