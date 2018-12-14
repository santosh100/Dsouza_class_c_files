#include<stdio.h>
#include<conio.h>
#include<alloc.h>
struct perchase
{
	int cno;
	char name[20];
	int per,dis,pay;
};
typedef struct perchase pmt;
void calpay(pmt*p,int n)
{
	int i;
	clrscr();
	printf("\n CNO\t CUSTOMER NAME\t PERCHASES \t DISCOUNT\t PAYMENT");
	printf("\n=====================================================================");
	for(i=0;i<n;i++)
	{
	    p[i].dis=0,p[i].pay=0;
	    gotoxy(1,i+5);
	    scanf("%d",&p[i].cno);
	    gotoxy(10,i+5);
	    fflush(stdin);
	    gets(p[i].name);
	    gotoxy(27,i+5);
	    scanf("%d",&p[i].per);
	    if(p[i].per<1000)
		p[i].dis=0;
	    else
		if(p[i].per<=5000)
		    p[i].dis=p[i].per*.1;
		else
		    if(p[i].per<=10000)
			p[i].dis=p[i].per*.2;
		    else
			p[i].dis=p[i].per*.25;
	    gotoxy(45,i+5);
	    printf("%d",p[i].dis);
	    p[i].pay=p[i].per-p[i].dis;
	    gotoxy(60,i+5);
	    printf("%d",p[i].pay);
	}
}
void main()
{
	pmt *p;
	int n;
	clrscr();
	printf("\n how many costomer: ");
	scanf("%d",&n);
	p=(pmt*)calloc(n,sizeof(pmt));
	calpay(p,n);
}