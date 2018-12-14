#include<stdio.h>
#include<conio.h>
void main()
{
	char *p = "hello everyone how are you";
   //	printf("%s",p);
	int i=0;
	clrscr();
	for( ;*(p+i)!='\0';i++)
	    printf("%c",(char)*(p+i));
	getch();
}