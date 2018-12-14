#include<stdio.h>
#include<conio.h>
void main()
{
	int n,t,i,p=0;
	clrscr();
	printf("Enter till:\t");
	scanf("%d",&t);
	for(n=1;n<=t;n++)
	{
		for(i=1;i<=n;i++)
		{
			p++;
			printf("%5d",p);
		}
	printf("\n");
	}
}