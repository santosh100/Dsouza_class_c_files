#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	clrscr();
	printf("enter limit");
	scanf("%d",&n);
	for( ;n>=1;n--)
	{
		printf("%5d",n);
		if(n%10==0)
		{
			printf("\n");
		getch();
		}
	}
	getch();
}