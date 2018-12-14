#include<stdio.h>
#include<conio.h>
void main()
{
	int n,p,i=4;
	clrscr();
	printf("Enter any no:\t");
	scanf("%d",&n);
	while(i>0)
	{
		printf("Enter any no:\t");
		scanf("%d",&p);
		if(p<n)
			n=p;
	i--;
	}
		printf("Smallest no in entered no= %d",n);

}