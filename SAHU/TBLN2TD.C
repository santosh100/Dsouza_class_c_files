#include<stdio.h>
#include<conio.h>
void main()
{
	int n,t,i,s;
	clrscr();
	printf("Enter from to till:\t");
	scanf("%d%d",&n,&t);
	while(n<=t)
	{
		for(i=1;i<=10;i++)
		{
			s=n*i;
			printf("%-8d",s);
		}
		if(n%10==0)
			getch();
	printf("\n");
	n++;
	}
	getch();
}
