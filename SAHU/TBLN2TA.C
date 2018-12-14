#include<stdio.h>
#include<conio.h>
void main()
{
	int n=0,t,i,s;
	clrscr();
	printf("Enter n and t:\t");
	scanf("%d%d",&n,&t);
	for( ;n<=t;n++)
	{
		for(i=1,s=0;i<=10;i++)
		{
			s=n*i;
			printf("%-8d",s);
		}
		if(n%10==0)
				getch();
	printf("\n");
	}
	getch();
}