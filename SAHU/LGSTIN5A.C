#include<stdio.h>
#include<conio.h>
void main()
{
	int n,p,i;
	clrscr();
	printf("Enter no:\t");
	scanf("%d",&n);
	for(i=4,p=0;i>0;i--)
	{
		printf("Enter no:\t");
		scanf("%d",&p);
		if(p>n)
			n=p;
	}
		printf("largest no in entered no= %d",n);
}