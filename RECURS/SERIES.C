#include<stdio.h>
#include<conio.h>
void series(int i,int t)
{
	int a=i*2+1;
	if(a<=t)
	{
	    printf("%5d",a);
	    series(a,t);
	}
}
void main()
{
	int t;
	clrscr();
	printf("\n Enter limit: ");
	scanf("%d",&t);
	series(0,t);
}