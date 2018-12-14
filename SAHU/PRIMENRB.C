#include<stdio.h>
#include<conio.h>
void main()
{
	int n=2,i;
	clrscr();
	while(n<=1000)
	{
		i=2;
		while(i<=n/2)
		{
			if(n%i==0)
				break;
		i++;
		}
		if(i>n/2)
			printf("\nprime no= %d",n);
	n++;
	if(n%100==0)
		getch();
	}
}