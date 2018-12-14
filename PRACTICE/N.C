#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
	FILE *p1,*p2,*p3;
	int no,bulb=0;
	char fname[20];
	clrscr();
	printf("\n Enter file name to open: ");
	gets(fname);
	p1=fopen(fname,"r+");
	if(p1==NULL)
	{
	    p1=fopen(fname,"w");
	    bulb=1;
	}
	if(p1==NULL)
	{
	    textbackground(5);
	    textcolor(BLINK);
	    cprintf("\n this file cannot be opened: ");
	    return;
	}
	if(bulb==0)
	    fseek(p1,0,2);
	printf("\n Enter data to exit enter minus value: ");
	while(1)
	{
	    scanf("%d",&no);
	    if(no<0)
		break;
	    putw(no,p1);
	}
	fclose(p1);
	p1=fopen(fname,"r");
	p2=fopen("even","w");
	p3=fopen("odd","w");
	while((no=getw(p1))!=EOF)
	{
	    if(no%2==0)
		putw(no,p2);
	    else
		putw(no,p3);
	}
	fclose(p1);
	fclose(p2);
	fclose(p3);
	p2=fopen("even","r");
	p3=fopen("odd","r");
	printf("\n the contents of the even file are: \n");
	while((no=getw(p2))!=EOF)
	{
	      printf("%5d",no);
	}
	printf("\n the contents of the odd file are: \n");
	while((no=getw(p3))!=EOF)
	{
	      printf("%5d",no);
	}
	fclose(p2);
	fclose(p3);
	getch();
}