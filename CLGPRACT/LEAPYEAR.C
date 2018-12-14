#include<stdio.h>
#include<conio.h>
void main()
{
	int year;
	clrscr();
	printf("\n Enter year: ");
	scanf("%d",&year);
	if(year%100==0)                         //check2100,2200,2400,1992
	   {
	   if(year%400==0)
		printf("\n %d is leap year",year);
	   else
		printf("\n %d is not leap year",year);
	   }
	else
	  if(year%4==0)
		printf("\n %d is leap year",year);
	else
		printf("\n %d is not leap year",year);

}