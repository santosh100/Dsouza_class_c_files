#include<stdio.h>
#include<conio.h>
void main()
{
	int n,s=1;
	clrscr();
	printf("enter any no: \n");
	scanf("%d",&n);
	while(n>1)
	{
		s=s*n;
	n--;
	}
	printf("factorial of entered no is=%d",s);
	getch();
}