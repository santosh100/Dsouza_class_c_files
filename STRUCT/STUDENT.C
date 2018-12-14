#include<stdio.h>
#include<conio.h>
#include<alloc.h>
#include<string.h>
struct student
{
	int rollno;
	char name[20];
	int sub[5],tot,per;
	char result[20];
};
typedef struct student stud;
int i,j;
void input(stud*p,int n)
{
	int x;
	clrscr();
	printf("\nROLLNO    NAME\t\tM    S    E    CS    H\t  TOTAL  PERCENTAGE  RESULT");
	printf("\n-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-");
	for(i=0;i<n;i++)
	{
	    gotoxy(1,i+5);
	    scanf("%d",&p[i].rollno);
	    gotoxy(10,i+5);
	    fflush(stdin);
	    gets(p[i].name);
	    for(x=25,j=0;j<5;j++,x+=5)
	    {
		gotoxy(x,i+5);
		scanf("%d",&p[i].sub[j]);
	    }
	}
}
void calresult(stud*p,int n)
{
	for(i=0;i<n;i++)
	{
	    p[i].tot=0;
	    p[i].per=0;
	   for(j=0;j<5;j++)
	       p[i].tot+=p[i].sub[j];
	       p[i].per=p[i].tot/5;
	   if(p[i].per>=90)
	       strcpy(p[i].result,"A+");
	   else
		if(p[i].per>=70)
		    strcpy(p[i].result,"B");
		else
		    if(p[i].per>=50)
			strcpy(p[i].result,"PASS");
		    else
			strcpy(p[i].result,"FAIL");
	}
}
void print(stud*p,int n)
{
	int x;
	for(i=0;i<n;i++)
	{
	    gotoxy(53,i+5);
	    printf("%d",p[i].tot);
	    gotoxy(63,i+5);
	    printf("%d %",p[i].per);
	    gotoxy(70,i+5);
	    printf("%s",p[i].result);
	}
}
void main()
{
	stud*p;
	int n;
	clrscr();
	printf("\n Enter number of students: ");
	scanf("%d",&n);
	p=(stud*)calloc(n,sizeof(stud));
	input(p,n);
	calresult(p,n);
	print(p,n);
}