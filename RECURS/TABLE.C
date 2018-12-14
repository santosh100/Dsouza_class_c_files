#include<stdio.h>
#include<conio.h>
void table(int n, int i)
{
	if(i<=10)
	{
	    printf("\n %d",n*i);
	    table(n,i+1);
	}
}
void main()
{
	int n,i=1;
	clrscr();
	printf("\n Enter any no: ");
	scanf("%d",&n);
	table(n,i);
}