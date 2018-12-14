#include<stdio.h>
#include<conio.h>
void swap2no()
{
	int a,b,t;
	clrscr();
	printf("\n Enter two no: ");
	scanf("%d%d",&a,&b);
	printf("\n no before swapping\n a = %d  b = %d",a,b);
	t=a;
	a=b;
	b=t;
	printf("\n no after swapping\n a = %d   b = %d",a,b);
}
void main()
{
	swap2no();
}