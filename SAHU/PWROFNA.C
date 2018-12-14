#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,p;
	clrscr();
	printf("enter values of a and b: \n ");
	scanf("%d%d",&a,&b);
	for(p=1;b>=1;b--)
		p*=a;
	printf("%d",p);
	getch();
}