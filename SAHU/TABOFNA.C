#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,s=0;
	clrscr();
	printf("enter any no: \n");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		s=n*i;
	      // s=s+n;
		printf("%-5d",s);
	}
	getch();
}