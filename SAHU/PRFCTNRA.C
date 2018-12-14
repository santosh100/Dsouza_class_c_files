#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,s;
	clrscr();
	for(n=2;n<=1000;n++)
	{
		for(i=n/2,s=0;i>=1;i--)
		{
			if(n%i==0)
				s=s+i;
		}
		if(s==n)
			printf("\nperfect no:= %d",n);
	}
}