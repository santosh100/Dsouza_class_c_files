#include<stdio.h>
#include<conio.h>
void main()
{
	int a=1,t;
	clrscr();
	printf("enter limit: \n");
	scanf("%d",&t);
	while(a<=t)
	{
		printf("%10d",a);
		a=a*2+1;

	}
	getch();

}