#include<stdio.h>
#include<conio.h>
void main()
{
	int n,t,i;
	clrscr();
	printf("Enter till:\t");
	scanf("%d",&t);
	for(n=1;n<=t;n++)
	{
		for(i=n;i>0;i--)
			printf("%5d",i);
	printf("\n");
	}
}