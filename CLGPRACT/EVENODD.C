#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	clrscr();
	printf("\n Enter any no: ");
	scanf("%d",&n);
	if(n%2==0)
		printf("\n %d is even no ",n);
	else
		printf("\n %d is odd no ",n);
}