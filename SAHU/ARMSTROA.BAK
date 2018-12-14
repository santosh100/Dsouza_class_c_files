#include<stdio.h>
#include<conio.h>
void main()
{
	int n,s,p,t;
	clrscr();
	printf("Enter three digit:\t");
	scanf("%d",&n);
	for(s=0,t=0,p=n;p>0;p/=10)
	{
		t=p%10;
		s=s+t*t*t;
	}
		if(s==n)
			printf("%d is Armstrong no",n);
		else
			printf("%d is not Armstrong no",n);

}