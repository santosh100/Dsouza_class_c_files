#include<stdio.h>
#include<conio.h>
void main()
{
	int n,r,i;
	clrscr();
	printf("Enter range:\t");
	scanf("%d",&r);
	for(n=1;n<=r;n++)
	{
		for(i=n;i<r;i++)
			printf("     ");
		for(i=n;i>1;i--)
			printf("%5d",i*n);
		for( ;i<=n;i++)
			printf("%5d",i*n);
	printf("\n");
	}
}