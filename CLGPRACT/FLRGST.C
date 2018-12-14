#include<stdio.h>
#include<conio.h>
void largest2no()
{
	int a,b;
	clrscr();
	printf("\n Enter two no to find largest: ");
	scanf("%d%d",&a,&b);
	if(a>b)
		printf("\n largest = %d",a);
	else
		printf("\n largest = %d",b);
}
void main()
{
	largest2no();
}