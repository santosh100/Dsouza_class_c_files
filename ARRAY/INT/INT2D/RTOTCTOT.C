#include<stdio.h>
#include<conio.h>
void main()
{
	int n[4][6];
	int i,j,x,y;
	clrscr();
	printf("\n Enter 3*5 matrix:");
	for(y=3,i=0;i<3;i++,y+=2)
	{
		n[i][5]=0;
		for(x=5,j=0;j<5;j++,x+=5)
		{
			gotoxy(x,y);
			scanf("%d",&n[i][j]);
			n[i][5]+=n[i][j];
		}
			gotoxy(x,y);
			printf("%d",n[i][5]);
	}
	y+=2;
	for(x=5,j=0;j<6;j++,x+=5)
	{
		n[3][j]=0;
		for(i=0;i<3;i++)
			n[3][j]+=n[i][j];
			gotoxy(x,y);
			printf("%d",n[3][j]);
	}
}