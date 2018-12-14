#include<stdio.h>
#include<conio.h>
int sum(int n)
{
	if(n==1)
	    return(1);
	return(n+sum(n-1));
}
void main()
{
	int s,n;
	clrscr();
	printf("\n Enter any no: ");
	scanf("%d",&n);
	s=sum(n);
	printf("\n sum = %d",s);
}