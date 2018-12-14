#include<stdio.h>
#include<conio.h>
void main()
{
	char ans;
	clrscr();
     do
     {

	printf(" hello \n");
	printf(" Do you want to contnue: y/n: ");
	fflush(stdin);
	ans=getchar();
    //	ans=getche();
    //	ans=getch();
     }while(ans=='y');
     getchar();

}