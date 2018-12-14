#include<stdio.h>
#include<conio.h>
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
			printf("%5c",i+64);
	printf("\n");
	}
}