#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i;
	clrscr();
	printf("\n Enter any no: ");
	scanf("%d",&n);
	for(i=2;i<=n/2;i++)
	{
	    if(n%i==0)
	    {
		printf("%d is not prime no",n);
		break;
	    }
	}
	if(i>n/2)
		printf("%d is prime no",n);
}