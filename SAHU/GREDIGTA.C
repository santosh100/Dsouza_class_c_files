#include<stdio.h>
#include<conio.h>
void main()
{
	int n,t,p;
	clrscr();
	printf("Enter digits:\t",n);
	scanf("%d",&n);
	for(p=0,t=0;n>0;n/=10)
	{
		t=n%10;
		if(t>p)
			p=t;
	}
		printf("the greatest no in entered digits= %d",p);
}
