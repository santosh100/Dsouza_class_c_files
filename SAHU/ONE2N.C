#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;
	clrscr();
	printf("enter limit\n ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		printf("%5d",i);
	getch();
}