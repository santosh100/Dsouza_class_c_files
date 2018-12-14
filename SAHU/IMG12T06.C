#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int n,t,i,m;
	clrscr();
	printf("Enter till:\t");
	scanf("%d",&t);
	for(n=1-t;n<t;n++)
	{
		m=t-abs(n);
		for(i=1;i<=m;i++)
			printf("%5d",m*i);
	printf("\n");
	}
}