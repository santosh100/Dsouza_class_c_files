#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3][3],b[3][3],c[3][3];
	int i,j,k,x,y;
	clrscr();
	printf("\n Enter 2 matrix of 3*3");
	for(y=3,i=0;i<3;i++,y+=2)
	{
	    for(x=5,j=0;j<3;j++,x+=5)
	    {
		gotoxy(x,y);
		scanf("%d",&a[i][j]);
	    }
	}
	for(y=3,i=0;i<3;i++,y+=2)
	{
	    for(x=35,j=0;j<3;j++,x+=5)
	    {
		gotoxy(x,y);
		scanf("%d",&b[i][j]);
	    }
	}
	printf("\n Multiplication of two matrix");
	for(y+=4,i=0;i<3;i++,y+=2)
	{
	    for(x=20,k=0;k<3;k++,x+=5)
	    {
	       c[i][k]=0;
		for(j=0;j<3;j++)
		    c[i][k]+=a[i][j]*b[j][k];
		    gotoxy(x,y);
		    printf("%d",c[i][k]);
	    }
	}
}