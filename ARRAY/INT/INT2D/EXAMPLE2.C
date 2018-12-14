#include<stdio.h>
#include<conio.h>
void main()
{
	int n[3][5],rtot[3],ctot[5];
	int i,j,x,y;
	clrscr();
	printf("\n Enter 3*5 matrix:");
	for(i=0,y=3;i<3;i++,y+=2)
	{
		rtot[i]=0;
		for(x=5,j=0;j<5;j++,x+=5)
		{
			gotoxy(x,y);
			scanf("%d",&n[i][j]);
			rtot[i]+=n[i][j];
		}
			gotoxy(x,y);
			printf("%d",rtot[i]);
	}
	y+=2;
	for(x=5,j=0;j<5;j++,x+=5)
	{
		ctot[j]=0;
		for(i=0;i<3;i++)
			ctot[j]+=n[i][j];
			gotoxy(x,y);
			printf("%d",ctot[j]);
	}
}