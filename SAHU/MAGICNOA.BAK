#include<stdio.h>
#include<conio.h>
void main()
{
	int n,p,r,t,s,u;
	clrscr();
	printf("Enter digits:\t");
	scanf("%d",&n);
	for(p=n,r=p*p,t=0,s=0;p>0;p/=10)
	{
		t=p%10;
		s=s*10+t;
	}
	for(t=0,u=0,s=s*s;s>0;s/=10)
		{
			t=s%10;
			u=u*10+t;
		}
		if(u==r)
			printf("%d is magic no",n);
		else
			printf("%d is not magic no",n);
}