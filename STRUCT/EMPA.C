#include<stdio.h>
#include<conio.h>
#include<alloc.h>
struct employee
{
	int empno;
	char name[20];
	int salary,tot;
	struct allowance
	{
	    int hra,ta,da;
	}all;
};
typedef struct employee emp;
void input(emp*p,int n)
{
	int i;
	clrscr();
	printf("\nEmpno\t Name\t\t Salary   HRA     TA     DA        Total ");
	printf("\n -_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_");
	for(i=0;i<n;i++)
	{
		p[i].tot=0;
		gotoxy(1,i+5);
		scanf("%d",&p[i].empno);
		gotoxy(10,i+5);
		fflush(stdin);
		gets(p[i].name);
		gotoxy(27,i+5);
		scanf("%d",&p[i].salary);
		gotoxy(35,i+5);
		scanf("%d",&p[i].all.hra);
		gotoxy(43,i+5);
		scanf("%d",&p[i].all.ta);
		gotoxy(50,i+5);
		scanf("%d",&p[i].all.da);
		p[i].tot=p[i].salary+p[i].all.hra+p[i].all.ta+p[i].all.da;
		gotoxy(60,i+5);
		printf("%d",p[i].tot);
	}
}
void main()
{
	emp*p;
	int n;
	clrscr();
	printf("\n How many employee: ");
	scanf("%d",&n);
	p=(emp*)calloc(n,sizeof(emp));
	input(p,n);
}