#include<stdio.h>
#include<conio.h>
void main ()
{
	int i,n;
	long int s=0;
	clrscr();
	printf("enter limit: \n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		s=(long int) i*i*i;
		if(i%20==0)
			getch();
		printf("%d cube is %ld \n",i,s);
	}
	getch();
}