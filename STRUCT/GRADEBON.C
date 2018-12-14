#include<stdio.h>
#include<conio.h>
#include<alloc.h>
#include<ctype.h>
struct gradebonus
{
	int empno;
	char name[20],grade;
	int sal,bon,tot;
};
typedef struct gradebonus bon;
void calbon(bon*p,int n)
{
	int i;
	char x;
	clrscr();
	printf("\n EMPNO\tNAME\t\t  SALARY\t GRADE\t\tBONUS\t     TOTAL");
	printf("\n=======================================================================");
	for(i=0;i<n;i++)
	{
		p[i].bon=0,p[i].tot=0;
	    gotoxy(1,i+5);
	    scanf("%d",&p[i].empno);
	    gotoxy(9,i+5);
	    fflush(stdin);
	    gets(p[i].name);
	    gotoxy(27,i+5);
	    scanf("%d",&p[i].sal);
	    gotoxy(43,i+5);
	    fflush(stdin);
	    scanf("%c",&p[i].grade);
	    x=toupper(p[i].grade);
	    if(x=='A')
		p[i].bon=p[i].sal*.1;
	    else
		if(x=='B')
		    p[i].bon=p[i].sal*.2;
		else
		    if(x=='C')
			p[i].bon=p[i].sal*.3;
		    else
			p[i].bon=p[i].sal*.08;
	    gotoxy(58,i+5);
	    printf("%d",p[i].bon);
	    p[i].tot=p[i].sal+p[i].bon;
	    gotoxy(70,i+5);
	    printf("%d",p[i].tot);
	}
}
void main()
{
	bon*p;
	int n;
	clrscr();
	printf("\n How many employee: ");
	scanf("%d",&n);
	p=(bon*)calloc(n,sizeof(bon));
	calbon(p,n);
}