// Factorial Using recursive
#include<stdio.h>
#include<conio.h>
int fact(int n)
{
	int f=1;
	if(n<=1)
	  return (1);
	while(n>0)
	{
	    f=f*n;
	    n--;
	}
	return (f);
}
void main()
{
	int f,n;
	clrscr();
	printf("\n Enter no: ");
	scanf("%d",&n);
	f=fact(n);
	printf("\n factorial = %d",f);
	getch();
}