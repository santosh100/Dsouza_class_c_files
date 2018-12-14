#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,p,t,s;
	clrscr();
	printf("Enter decimal no:\t");
	scanf("%d",&n);
	for(i=1,s=0,t=0;i<=100;i++)
	{
		for(p=i;p>0;p/=10)
		{
			t=p%10;
			if(t==n)
				s++;
		}
	}
	printf("\nfound %d  %d  times",n,s);
}