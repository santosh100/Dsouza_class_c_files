#include<stdio.h>
#include<conio.h>
void main()
{
	int n,s=0;
	clrscr();
	printf("enter any no: \n");
	scanf("%d",&n);
	for( ;n>=1;n--)
		s=s+n;
		printf("sum of entered no is=%d",s);
		getch();

}