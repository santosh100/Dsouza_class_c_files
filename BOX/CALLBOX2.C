			/* soutable size for my laptop */
#include<stdio.h>
#include<conio.h>
#include"box2.c"
void main()
{
	clrscr();

	mybox2(1,1,80,24,RED);
	mybox2(20,2,60,4,YELLOW);
	dmybox2(5,5,76,23,CYAN);
	gotoxy(26,3);
	textcolor(BLINK+RED);
     //	textbackground(WHITE);
	cprintf("     SANTOSH KUMAR SAHU    ");
	getch();
}
