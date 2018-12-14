		// This program will show you limit range of result
#include<stdio.h>
#include<conio.h>
void main()
{
	int p,r,t;
	float si;
	clrscr();
	printf("\nEnter principle,rate,time: ");
	scanf("%d%d%d",&p,&r,&t);
	si=(float)(p*r*t)/100;
	printf("\n simple interest = %.2f",si);
	getch();
}