#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("\n fibonacci series ");
	for(a=1,b=0,c=1;c<=100;c=a+b)
	{
		printf("%4d",c);
		a=b;
		b=c;
	}
}