#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;
	clrscr();
	printf("enter any no: \n");
	scanf("%d",&n);
	for(i=1;i*i<=n;i++)
	{
		if(i*i==n)
		{
			printf("%d is perfect square ",n);
			break;
		}
	}
		if(i*i>n)
			printf("%d is not perfect square ",n);
	getch();
}