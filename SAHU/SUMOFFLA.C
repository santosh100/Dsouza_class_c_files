#include<stdio.h>
#include<conio.h>
void main()
{
	int n,f=0;
	clrscr();
	printf("Enter digits:\t");
	scanf("%d",&n);
	f=n%10;
	for( ;n>=10;n/=10);
		f=f+n;
		printf("Sum of first and last digit is= %d",f);
}
