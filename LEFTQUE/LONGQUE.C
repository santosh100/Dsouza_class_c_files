#include<stdio.h>
#include<conio.h>
void main()
{
	int n,r,i,p;
	clrscr();
	printf("Enter range:\t");
	scanf("%d",&r);
	for(n=1;n<=r;n++)
	{
		for(i=1;i<=r-n;i++)
			printf("   ");
		for(p=n,i=1;i<n;i++,p++)
			printf("%3d",p%10);
		for( ;i>=1;i--,p--)
			printf("%3d",p%10);
	printf("\n");
	}
}
