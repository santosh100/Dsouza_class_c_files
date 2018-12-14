#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int n,t,i,m;
	clrscr();
	printf("Enter till:\t");
	scanf("%d",&t);
	for(n=-t;n<t;n++)
	{
		m=t-abs(n);
		for(i=0;i<=m;i++)
			printf("%5d",m*i);
	printf("\n");
	}
}