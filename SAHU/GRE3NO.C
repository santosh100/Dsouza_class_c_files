		/* program to find greatest among three no */

#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr ();
	printf("\n enter three no:\n");
	scanf("%d%d%d",&a,&b,&c);
	if (a>b&&a>c)
		printf("\n a=%d is greatest",a);
	else
		if(b>c)
			printf("\n b=%d is greatest",b);
		else
			printf("\n c=%d is greatest",c);
	getch();
}