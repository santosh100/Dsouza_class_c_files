#include<stdio.h>
#include<conio.h>
int fact(int n)
{
	int i;
	if(n<=1)
	    return (1);
	return(n*fact(n-1));
}
void main()
{
	int n,f;
	clrscr();
	printf("\n Enter no to find factorial: ");
	scanf("%d",&n);
	f=fact(n);
	printf("\n factorial = %d",f);
}