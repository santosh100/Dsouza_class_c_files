#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i=1,p=0,t=0,s=0;
	clrscr();
	printf("Enter decimal no:\t");
	scanf("%d",&n);
	while(i<=100)
	{
		p=i;
		while(p>0)
		{
			t=p%10;
			if(t==n)
				s++;
			p/=10;
		}
	i++;
	}
	printf("\nfound  %d  %d times",n,s);
}