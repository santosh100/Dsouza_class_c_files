#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i=2;
	clrscr();
	printf("Enter any number:\t");
	scanf("%d",&n);
	while(i<=n/2)
	{
		if(n%i==0)
		{
			printf("%d is not prime number",n);
			break;
		}
	i++;
	}
	if(i>n/2)
		printf("%d is prime number",n);
	getch();
}