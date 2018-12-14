#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c=0;
	clrscr();
	printf("\n Enter two no: ");
	scanf("%d%d",&a,&b);
	c=(a<b)?a:b;
	printf("\n %d is smallest",c);
}