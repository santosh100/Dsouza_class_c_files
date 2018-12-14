#include<stdio.h>
#include<conio.h>
void main()
{
	float cel,feh;
	clrscr();
	printf("\n Enter temperature in celsius: ");
	scanf("%f",&cel);
	feh=(1.8*cel)+32;
	printf("\n temperature in fehrenheit: %.2f ",feh);
}