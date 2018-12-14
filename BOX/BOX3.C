#include<stdio.h>
#include<conio.h>
#define H 3
#define V 3
#define DH 4
#define DV 4

void mybox3(int x1,int y1,int x2,int y2,int c)
{
	int i;
	textcolor(c);
	// for bhow bhow horizontal line
	for(i=x1;i<=x2;i++)
	{
		gotoxy(i,y1);
		cprintf("%c",H);
		gotoxy(i,y2);
		cprintf("%c",H);
		delay(20);
		sound(i*200);
	}
	// for meeooo meeooo vertical line
	for(i=y1+1;i<y2;i++)
	{
		gotoxy(x1,i);
		cprintf("%c",V);
		gotoxy(x2,i);
		cprintf("%c",V);
		delay(20);
		sound(i*100);
	}
	nosound();
}
void dmybox3(int x1,int y1, int x2,int y2,int c)
{
	int i;
	textcolor(c);

	// for bhow bhow horizontal line
	for(i=x1;i<=x2;i++)
	{
		gotoxy(i,y1);
		cprintf("%c",DH);
		gotoxy(i,y2);
		cprintf("%c",DH);
		delay(20);
		sound(i*200);
	}
	// for meeooo meeooo vertical line
	for(i=y1+1;i<y2;i++)
	{
		gotoxy(x1,i);
		cprintf("%c",DV);
		gotoxy(x2,i);
		cprintf("%c",DV);
		delay(20);
		sound(i*100);
	}
	nosound();
}
