#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
	char p[80];
	FILE *fp;
	int l=1;
	clrscr();
	fp=fopen("santosh.txt","r+");
	printf("\n Enter string: \n ");
	fseek(fp,0,SEEK_END);
	while(strlen(gets(p))>0)
	{
	    fputs(p,fp);
	    fputs("\n",fp);
	}
	rewind(fp);
	while((fgets(p,79,fp))!=NULL)
	{
	    puts(p);
	    l++;
	    if(l==23)
	    {
		textcolor(BLINK);
		textbackground(6);
		cprintf("\n\n Press any key to continue..........");
		getch();
		clrscr();
		l=1;
	    }
	}
	fclose(fp);
	getch();
}