			/* program to show call by reference */
#include<stdio.h>
#include<conio.h>
void subtract(int *a,int *b)
{
	int c=0;
	c=*a-*b;
	printf("\n subtractio = %d",c);
}
void main()
{
	int a,b;
	clrscr();
	printf("\n Enter two no: ");
	scanf("%d%d",&a,&b);
	subtract(&a,&b);
}