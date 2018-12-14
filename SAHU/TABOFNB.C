#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i=1,s=0;
	clrscr();
	printf("enter any no: \n");
	scanf("%d",&n);
	while(i<=10)
	{
	      //	s=n*i;
		s=s+n;
		printf("%-5d",s);
	i++;
	}
	getch();
}