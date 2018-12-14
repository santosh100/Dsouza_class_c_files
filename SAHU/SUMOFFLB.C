#include<stdio.h>
#include<conio.h>
void main()
{
	int n,f=0;
	clrscr();
	printf("Enter digits:\t");
	scanf("%d",&n);
	f=n%10;
	while(n>=10)
	{
		n/=10;
	}
		f=f+n;
		printf("Sume of first and last digit is= %d",f);
}