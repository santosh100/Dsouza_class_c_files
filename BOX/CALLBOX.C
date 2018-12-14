			// soutable for PC
/*
#include<stdio.h>
#include<conio.h>
#include"box.c"
void main()
{
	int x1,y1,x2,y2;
	clrscr();
	/* for(x1=1,y1=1,x2=79,y2=25;x1<=30;x1+=5,y1+=2,x2-=5,y2-=2)
		mybox(x1,y1,x2,y2,x1); */
    /*	mybox(1,1,79,50,RED);
	mybox(20,2,60,4,YELLOW);
	dmybox(10,5,78,45,CYAN);
	gotoxy(26,3);
	textcolor(BLINK);
	textbackground(WHITE);
	cprintf("OXFORD ACADEMY");
} */
			/* soutable size for my laptop */
#include<stdio.h>
#include<conio.h>
#include<box.c>
void main()
{
   //	int x1,y1,x2,y2;
	clrscr();
	/* for(x1=1,y1=1,x2=79,y2=25;x1<=30;x1+=5,y1+=2,x2-=5,y2-=2)
	      //	mybox(x1,y1,x2,y2,x1); */
	mybox(1,1,80,24,RED);
	mybox(20,2,60,4,YELLOW);
	dmybox(5,5,76,23,CYAN);
	gotoxy(26,3);
	textcolor(BLINK+RED);
     //	textbackground(WHITE);
	cprintf("     SANTOSH KUMAR SAHU    ");
	getch();
}
