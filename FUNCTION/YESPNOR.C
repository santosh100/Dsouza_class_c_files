			// Example of yes argument/parameter no return
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	void printline(char,int,int);         //yes parameter no return
	void table(int);
	void prime(int);
	void fact(int);
	char n[20];
	int f,t,l;
	clrscr();
	printf("\n Enter name: ");
	gets(n);
	printline('s',50,1);
	printline('%',20,2);
	printf("\n name = %s",n);
	printline('@',30,YELLOW);
	printline('*',40,RED);
	printf("\n Enter num to find fatorial: ");
	scanf("%d",&f);
	fact(f);
	printf("\n Enter num to find table: ");
	scanf("%d",&t);
	table(t);
	printf("\n Enter num to check prime: ");
	scanf("%d",&l);
	prime(l);
	getch();
}
//***************defining of function ******************
void printline(char a,int n,int c)
{
	int i;
	printf("\n");
	textcolor(c);
	for(i=1;i<=n;i++)
	{
	    cprintf("%c",a);
	    delay(150);
	    sound(200*i);
	}
	    nosound();
}
//******************* finding out factoial *************
void fact(int n)
{
	int f=1;
	for( ;n>1;n--)
	    f=f*n;
	printf("\n factorial is = %d",f);
}
//******************** printing table ******************
void table(int n)
{
	int i;
	for(i=1;i<=10;i++)
	    printf("\n %d*%d = %d",n,i,n*i);
}
//******************* checking prime number ************
void prime(int n)
{
	int i=2;
	while(i<=n/2)
	{
	    if(n%i==0)
	    {
		printf("\n not prime num");
		break;
	    }
	    i++;
	}
		if(i>n/2)
		    printf("\n prime num");
}