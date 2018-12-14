			/* soutable size for my laptop */
#include<stdio.h>
#include<conio.h>
#include"boxa.c"
void main()
{
	clrscr();

	myboxa(1,1,80,24,RED);
	myboxa(20,2,60,4,YELLOW);
	dmyboxa(5,5,76,23,CYAN);
	gotoxy(26,3);
	textcolor(BLINK+RED);
     //	textbackground(WHITE);
	cprintf("     SANTOSH KUMAR SAHU    ");
	getch();
}
