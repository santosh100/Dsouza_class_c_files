#include<stdio.h>
#include<conio.h>
void main()
{
	int n,a=3,b=2,res=0;
     //	clrscr();
	printf("\n Enter 1 for + operator\n Enter 2 for - operator\n Enter 3 for * operator\n Enter 4 for / operator\n Enter 5 for '%' operater");
	scanf("%d",&n);
	switch(n)
	{
		case 1 :
			res=a+b;
			printf("\n sum of %d + %d = %d",a,b,res);
			break;
		case 2 :
			res=a-b;
			printf("\n subtractio of %d - %d = %d",a,b,res);
			break;
		case 3 :
			res=a*b;
			printf("\n multiplictio of %d * %d = %d",a,b,res);
			break;
		case 4 :
			res=a/b;
			printf("\n divisio of %d / %d = %d",a,b,res);
			break;
		case 5 :
			res=a%b;
			printf("\n mode of %d ,%, %d = %d",a,b,res);
			break;
		default :
			printf("\n you have entered wrong no");
	}
	getch();
}