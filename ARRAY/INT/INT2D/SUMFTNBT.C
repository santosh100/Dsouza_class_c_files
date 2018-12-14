#include<stdio.h>
#include<conio.h>
void main()
{
	int n[3][3];
	int i,j,x,y,ft=0,bt=0;
	clrscr();
	printf("\n Enter 3*3 matrix:");
	for(y=3,i=0;i<3;i++,y+=2)
	{
	   for(x=5,j=0;j<3;j++,x+=5)
	   {
		gotoxy(x,y);
		scanf("%d",&n[i][j]);
		if((i+j)<=2)
		   ft+=n[i][j];
		if((i+j)>=2)
		   bt+=n[i][j];
	   }
	}
	printf("\n sum of front triangle = %d\n sum of back triangle = %d",ft,bt);
}