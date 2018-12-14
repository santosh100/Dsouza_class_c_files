			/* program to show call by value */
#include<stdio.h>
#include<conio.h>
void add(int a, int b, int c)
{
	c=a+b;
	printf("\n sum of given no is %d",c);
}
void main()
{
	int a,b,c=0;
	clrscr();
	printf("\n Enter two no: ");
	scanf("%d%d",&a,&b);
	add(a,b,c);
}