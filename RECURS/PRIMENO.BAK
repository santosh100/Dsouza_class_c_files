#include<stdio.h>
#include<conio.h>
int i=2;
int primeno(int n)
{
	if(n%i==0)
	    return(i);
	if(i<=n/2)
	{
		i++;
	    primeno(n);
	}
	    return(i);
}
void main()
{
	int n;
	clrscr();
	printf("\n Enter any no to check whether it is prime or not: ");
	scanf("%d",&n);
	i=primeno(n);
	if(i>n/2)
	    printf("\n %d is prime no",n);
	else
	    printf("\n %d is not prime no",n);
}