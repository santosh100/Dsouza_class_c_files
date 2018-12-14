			/* Examle of yes argument/parameter no return */
#include<stdio.h>
#include<conio.h>
void table(int n)
{
	int i;
	printf("\n table of %d is below",n);
	for(i=1;i<=10;i++)
		printf("\n %d*%d = %d",n,i,n*i);
}
void prime(int n)
{
	int i,flag=0;
	for(i=2;i<=n/2;i++)
	{
	    if(n%i==0)
	    {
		flag=1;
		break;
	    }
	}
	    if(flag==1)
		printf("\n\n %d is not prime no",n);
	    else
		printf("\n\n %d is prime no",n);
}
void main()
{
	int n;
	char ans;
	clrscr();
	do
	{
		printf("\n Enter any no: ");
		scanf("%d",&n);
		table(n);
		prime(n);
		printf("\n volue to continue y/n: ");
		fflush(stdin);
		ans=getch();
	}while(ans=='y'||ans=='Y');
}