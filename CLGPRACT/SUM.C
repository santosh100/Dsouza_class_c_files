			/* program to add two numbers using pointer */
#include<stdio.h>
#include<conio.h>
void main()
{
	int *c,a,b;
	clrscr();
	printf("\n Enter two no: ");
	scanf("%d%d",&a,&b);
	*c= *(&a) + *(&b);
	printf("\n sum of given no = %d",*c);
}
