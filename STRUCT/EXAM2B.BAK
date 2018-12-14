		    /* Example of Array within structure */
#include<stdio.h>
#include<conio.h>
struct emp
{
	int empno;
	char name[20];
	int salary;
	char job[20];
}x[5];
void main()
{
      //	struct emp x[5];
	int i;
	clrscr();
	printf("\n Enter\nempno\t name\t\t    salary\tjob");
	printf("\n--------------------------------------------");
	for(i=0;i<5;i++)
	{
	    gotoxy(1,i+5);
	    scanf("%d",x[i].empno);
	    gotoxy(10,i+5);
	    fflush(stdin);
	    gets(x[i].name);
	    gotoxy(30,i+5);
	    scanf("%d",x[i].salary);
	    gotoxy(40,i+5);
	    fflush(stdin);
	    gets(x[i].job);
	}
}
