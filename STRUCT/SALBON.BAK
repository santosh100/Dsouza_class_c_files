#include<stdio.h>
#include<conio.h>
#include<alloc.h>
struct salarybonus
{
	int empno;
	char name[20];
	int sal,bon,tot;
};
typedef struct salarybonus bon;
int i;
void input(bon*p,int n)
{
	clrscr();
	printf("\nEMPNO\t  NAME\t\t    SALARY\t   BONUS\tTOTAL");
	printf("\n=============================================================");
	for(i=0;i<n;i++)
	{
	    p[i].bon=0;
	    p[i].tot=0;
	    gotoxy(1,i+5);
	    scanf("%d",&p[i].empno);
	    gotoxy(10,i+5);
	    fflush(stdin);
	    gets(p[i].name);
	    gotoxy(30,i+5);
	    scanf("%d",&p[i].sal);
	    if(p[i].sal<1000)
		p[i].bon=0;
	    else
		if(p[i].sal<=5000)
		    p[i].bon=p[i].sal*.1;
		else
		    if(p[i].sal<=10000)
			p[i].bon=p[i].sal*.08;
		    else
			if(p[i].sal<=15000)
			    p[i].bon=p[i].sal*.05;
	    gotoxy(45,i+5);
	    printf("%d",p[i].bon);
	    p[i].tot=p[i].sal+p[i].bon;
	    gotoxy(57,i+5);
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
	input(p,n);
}