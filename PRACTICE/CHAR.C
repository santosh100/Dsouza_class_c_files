#include<stdio.h>
#include<conio.h>
void main()
{
   /*	int code=64;
	char symbol;
	symbol=code;
	clrscr();
	printf("\n code = %d symbol = %d",code,symbol);
	printf("\n code = %c symbol = %c",code,symbol);
	getch();    */
	int i;
	int code=127;
	char symbol;
	clrscr();
	for(i=0;i<10;i++)
	{
	    symbol=code++;
	    printf("\n code = %d symbol = %d",code,symbol);
	    printf("\n code = %c symbol = %c",code,symbol);
	}
	getch();
}