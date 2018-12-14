#include<stdio.h>
#include<conio.h>
void main()
{
	int n[2][3],m[3][2];
	int i,j,x,y;
	clrscr();
	printf("\n Enter 3*2 matrix:");
	for(y=3,i=0;i<2;i++,y+=2)
	{
	    for(x=5,j=0;j<3;j++,x+=5)
	    {
		gotoxy(x,y);
		scanf("%d",&n[i][j]);
		m[j][i]=n[i][j];
	    }
	}
	for(y=3,i=0;i<3;i++,y+=2)
	{
	    for(x=40,j=0;j<2;j++,x+=5)
	    {
		gotoxy(x,y);
		printf("%d",m[i][j]);
	    }
	}
}