#include<stdio.h>
#include<conio.h>
void main()
{
	int n,a=1,s=0,i;
	clrscr();
	printf("enter any no: \n");
	scanf("%d",&n);
	a=n/2;
	for(i=1;i<=a;i++)
	{
		if(n%i==0)
			s=s+i;
	}
	if(s==n)
	{
		printf("%d is a perfect no",n);
	}
	else
	{
		printf("%d is not a perfect no",n);
	}
	getch();

}
