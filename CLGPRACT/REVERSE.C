#include<stdio.h>
#include<conio.h>
void main()
{
	int n,t,s;
	clrscr();
	printf("\n Enter any no: ");
	scanf("%d",&n);
	for(t=0,s=0;n>0;n/=10)
	{
		t=n%10;
		s=s*10+t;
	}
	printf("\n reverse  %d",s);
}