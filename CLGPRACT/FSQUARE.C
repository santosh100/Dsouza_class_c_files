#include<stdio.h>
#include<conio.h>
void square()
{
	int n;
	clrscr();
	printf("\n Enter any no to find square: \n");
	scanf("%d",&n);
	printf("\n square of a given no = %d",n*n);
}
void main()
{
	square();
}