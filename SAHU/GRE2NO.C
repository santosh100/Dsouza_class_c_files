	   /*program to find greater between two no*/
#include<stdio.h>
#include<conio.h>
void main ()
{
	int a,b;
	clrscr ();
	printf("\n enter two no:\n");
	scanf("%d%d",&a,&b);
	if(a>b)
		printf("\n a=%d is greater",a);
	else
		printf("\n b=%d is greater",b);
	getch();
}