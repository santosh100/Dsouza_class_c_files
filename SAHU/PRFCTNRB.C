#include<stdio.h>
#include<conio.h>
void main()
{
	int n=2,s,i;
	clrscr();
	while(n<=1000)
	{
		i=n/2;
		s=0;
		while(i>=1)
		{
			if(n%i==0)
				s=s+i;
		i--;
		}
		if(s==n)
			printf("\nperfect no:= %d",n);
	n++;
	}
}