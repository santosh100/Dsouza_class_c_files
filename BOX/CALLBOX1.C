			/* soutable size for my laptop */
#include<stdio.h>
#include<conio.h>
#include"box1.c"
void main()
{
	clrscr();

	mybox1(1,1,80,24,RED);
	mybox1(20,2,60,4,YELLOW);
	dmybox1(5,5,76,23,CYAN);
	gotoxy(26,3);
	textcolor(BLINK+RED);
     //	textbackground(WHITE);
	cprintf("     SANTOSH KUMAR SAHU    ");
	getch();
}
