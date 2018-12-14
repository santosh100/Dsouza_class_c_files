#include<stdio.h>
#include<conio.h>
void main()
{
	int n,t,i;
	clrscr();
	printf("Enter till:\t");
	scanf("%d",&t);
	for(n=0;n<=t;n++)
	{
		for(i=0;i<=n;i++)
			printf("%5d",n*i);
	printf("\n");
	}
}