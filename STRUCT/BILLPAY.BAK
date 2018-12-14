#include<stdio.h>
#include<conio.h>
#include<alloc.h>
struct billpayment
{
	int id;
	char name[20];
	int unit,pay;
};
typedef struct billpayment pmt;
void calpay(pmt*p,int n)
{
	int i;
	clrscr();
	printf("\nID\t NAME\t\t    UNIT\tPAYMENT");
	printf("\n===============================================");
	for(i=0;i<n;i++)
	{
		p[i].pay=0;
	    gotoxy(1,i+5);
	    scanf("%d",&p[i].id);
	    gotoxy(10,i+5);
	    fflush(stdin);
	    gets(p[i].name);
	    gotoxy(30,i+5);
	    scanf("%d",&p[i].unit);
	    if(p[i].unit<=33)
		p[i].pay=100;
	    else
		if(p[i].unit<=300)
		    p[i].pay=p[i].unit*3;
		else
		    if(p[i].unit<=500)
			p[i].pay=p[i].unit*5;
		    else
			p[i].pay=p[i].unit*8;
	    gotoxy(40,i+5);
	    printf("%d",p[i].pay);

	}
}
void main()
{
	pmt*p;
	int n;
	clrscr();
	printf("\n how many: ");
	scanf("%d",&n);
	p=(pmt*)calloc(n,sizeof(pmt));
	calpay(p,n);
}