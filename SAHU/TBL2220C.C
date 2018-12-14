#include<stdio.h>
#include<conio.h>
void main()
{
	int a,i,s;
	clrscr();
	for(a=2;a<=20;a++)
	{
		i=1;
		while(i<=10)
		{
			s=a*i;
			printf("%5d",s);
		i++;
		}
	printf("\n");
	}
}