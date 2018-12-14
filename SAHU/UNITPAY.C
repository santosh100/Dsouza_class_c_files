#include<stdio.h>
#include<conio.h>
void main()
{
	int unit,pay;
	clrscr();
	printf("enter unit:\n");
	scanf("%d",&unit);
	if(unit<=33)
		pay=100;
	else
		if(unit<=300)
			pay=unit*3;
		else
			if(unit<=500)
				pay=unit*5;
			else
				pay=unit*8;
	printf("payment=%d",pay);
	getch();
}