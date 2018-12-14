#include<stdio.h>
#include<conio.h>
void main()
{
	int i=5;
	clrscr();
	ram:
	if(i)
	{
		printf("%5d",i--);
		goto ram;
	}
}