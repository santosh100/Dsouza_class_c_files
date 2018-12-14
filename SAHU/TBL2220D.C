#include<stdio.h>
#include<conio.h>
void main()
{
	int a=2,i,s;
	clrscr();
	while(a<=20)
	{
		for(i=1,s=0;i<=10;i++)
		{
			s=a*i;
			printf("%5d",s);
		}
	a++;
	printf("\n");
	}
}