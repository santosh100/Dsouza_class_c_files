#include<stdio.h>
#include<conio.h>
#define TL 218
#define TR 191
#define H 42
#define V 42
#define BL 192
#define BR 217
#define DTL 201
#define DTR 187
#define DH 35
#define DV 35
#define DBL 200
#define DBR 188

void mybox2(int x1,int y1,int x2,int y2,int c)
{
	int i;
	textcolor(c);
	gotoxy(x1,y1);
	cprintf("%c",TL);
	gotoxy(x2,y1);
	cprintf("%c",TR);
	gotoxy(x1,y2);
	cprintf("%c",BL);
	gotoxy(x2,y2);
	cprintf("%c",BR);
	// for bhow bhow horizontal line
	for(i=x1+1;i<x2;i++)
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
void dmybox2(int x1,int y1, int x2,int y2,int c)
{
	int i;
	textcolor(c);
	gotoxy(x1,y1);
	cprintf("%c",DTL);
	gotoxy(x2,y1);
	cprintf("%c",DTR);
	gotoxy(x1,y2);
	cprintf("%c",DBL);
	gotoxy(x2,y2);
	cprintf("%c",DBR);
	// for bhow bhow horizontal line
	for(i=x1+1;i<x2;i++)
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
