#include<stdio.h>
#include<conio.h>
int power(long int x, int n, int l)
{
	if(l<1)
	    return (x);
	return (power(n*x,n,--l));
}
void main()
{
	long int n;
	int l;
	clrscr();
	printf("\n Enter no: ");
	scanf("%ld",&n);
	printf("\n Enter no: ");
	scanf("%d",&l);
	n=power(1,n,l);
	printf("Power = %ld",n);
}
