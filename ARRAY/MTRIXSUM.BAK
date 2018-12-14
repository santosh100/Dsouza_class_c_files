#include<stdio.h>
#include<conio.h>
void main()
{
	int a[4][6];
	int i,j,x,y;
	clrscr();
	printf("\n Enter 3*5 matrix: ");
	for(y=3,i=0;i<3;i++,y+=2)
	{
		a[i][5]=0;
		for(x=5,j=0;j<5;j++,x+=5)
		{
		gotoxy(x,y);
		scanf("%d",&a[i][j]);
		a[i][5]+=a[i][j];
		}
		gotoxy(x,y);
		printf("%d",a[i][j]);
	}
   //	y+=2;
	for(x=5,j=0;j<6;j++,x+=5)
	{
		a[3][j]=0;
		for(i=0;i<3;i++)
			a[3][j]+=a[i][j];
		gotoxy(x,y);
		printf("%d",a[3][j]);
	}
}