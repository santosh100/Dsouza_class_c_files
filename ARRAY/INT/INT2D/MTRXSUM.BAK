#include<stdio.h>
#include<conio.h>
void main()
{
	int n[3][3],m[3][3],s[3][3];
	int i,j,x,y;
	clrscr();
	printf("\n Enter 3*3 matrix:");
	for(y=3,i=0;i<3;i++,y+=2)
	{
	    for(x=5,j=0;j<3;j++,x+=5)
	    {
		gotoxy(x,y);
		scanf("%d",&n[i][j]);
	    }
	}
	for(y=3,i=0;i<3;i++,y+=2)
	{
	    for(x=30,j=0;j<3;j++,x+=5)
	    {
		gotoxy(x,y);
		scanf("%d",&m[i][j]);
	    }
	}
	printf("\n sum of two matrix");
	for(y+=4,i=0;i<3;i++,y+=2)
	{
	    for(x=15,j=0;j<3;j++,x+=5)
	    {
		s[i][j]=n[i][j]+m[i][j];
		gotoxy(x,y);
		printf("%d",s[i][j]);
	    }
	}
}