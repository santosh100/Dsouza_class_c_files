#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,s;
	clrscr();
	for(n=2;n<=1000;n++)
	{
		i=1;
		s=0;
		while(i<=n/2)
		{
			if(n%i==0)
				s=s+i;
		i++;
		}
		if(s==n)
			printf("\nperfect no:= %d",n);
	}
}
