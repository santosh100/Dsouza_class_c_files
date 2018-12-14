#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int n,r,i,m;
	clrscr();
	printf("Enter range:\t");
	scanf("%d",&r);
	for(n=1-r;n<r;n++)
	{
		m=r-abs(n);
		for(i=m;i<r;i++)
			printf("     ");
		for(i=1;i<m*2;i++)
			printf("    *");
	printf("\n");
	}
}