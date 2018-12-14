#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,s;
	clrscr();
	printf("\n Enter limit: ");
	scanf("%d",&n);
	for(s=0,i=1;i<=n;i+=2)
	{
		s+=i;
		if(i>=n-1)
			printf("%d",i);
		else
			printf("%d + ",i);
	}
	printf("\n sum %d",s);
}