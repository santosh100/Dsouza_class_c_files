#include<stdio.h>
#include<conio.h>
void main()
{
	int n[3][5];
	int i,j,x,y;
	clrscr();
	printf("\n Enter 3*5 matrix:");
	for(y=3,i=0;i<3;i++,y+=2)
	{
		for(x=5,j=0;j<5;j++,x+=5)
		{
			gotoxy(x,y);
			scanf("%d",&n[i][j]);
		}
	}
}