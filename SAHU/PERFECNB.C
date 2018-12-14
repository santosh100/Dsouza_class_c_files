#include<stdio.h>
#include<conio.h>
void main()
{
	int n,a=0,s=0;
	clrscr();
	printf("enter any no: \n");
	scanf("%d",&n);
	a=n/2;
	while(a>=1)
	{
		if(n%a==0)
			s+=a;
	a--;
	}
	if(s==n)
		printf("%d is perfect no: ",n);
	else
		printf("%d is not perfect no: ",n);
	getch();

}