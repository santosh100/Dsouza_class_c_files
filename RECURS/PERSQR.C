#include<stdio.h>
#include<conio.h>
void persqr(int n, int i)
{
	if(i*i>n)
	    printf("%d is not Perfect squire",n);
	else
	    if(i*i==n)
		printf("%d is perfect squire",n);
	    else
		persqr(n,++i);
}
void main()
{
	int n, i=1;
	clrscr();
	printf("\n enter any no to check perfect squire: ");
	scanf("%d",&n);
	persqr(n,i);
}