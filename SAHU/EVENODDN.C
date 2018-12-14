#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	clrscr();
	printf("Enter any no:\t");
	scanf("%d",&n);
	if(n%2==0)
		printf("%d is even no");
	else
		printf("%d is odd no");
}