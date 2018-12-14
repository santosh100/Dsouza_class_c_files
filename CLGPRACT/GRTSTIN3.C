#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("\n Enter three no: ");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c)
		printf("\n %d is greatest",a);
	else if(b>c)
		printf("\n %d is greatest",b);
	else
		printf("\n %d is greatest",c);


}