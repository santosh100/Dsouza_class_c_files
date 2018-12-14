#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,p,t,s;
	clrscr();
	printf("Enter decimal no:\t");
	scanf("%d",&n);
	for(i=1,p=0,t=0,s=0;i<=100;i++)
	{
		p=i;
		while(p>0)
		{
			t=p%10;
			if(t==n)
				s++;
			p/=10;
		}

	}
	printf("\nfound %d  %d times",n,s);
}