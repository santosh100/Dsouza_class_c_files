#include<stdio.h>
#include<conio.h>
void main()
{
	int n,p,i;
	clrscr();
	printf("Enter any no:\t");
	scanf("%d",&n);
	for(i=1;i<=4;i++)
	{
		printf("Enter any no:\t");
		scanf("%d",&p);
		if(p<n)
			n=p;
	}
		printf("Smallest no in entered no= %d",n);
}