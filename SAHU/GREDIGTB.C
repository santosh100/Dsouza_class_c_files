#include<stdio.h>
#include<conio.h>
void main()
{
	int n,p=0,t=0;
	clrscr();
	printf("Enter digits:\t");
	scanf("%d",&n);
	while(n>0)
	{
		t=n%10;
		if(t>p)
			p=t;
		n/=10;
	}
		printf(" The greatest no in entered digits= %d",p);
}