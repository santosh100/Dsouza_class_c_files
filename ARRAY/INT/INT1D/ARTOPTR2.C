#include<stdio.h>
#include<conio.h>
void main()
{
	char sn;
	int a,b,res=0;
	clrscr();
	printf("\n Enter tow numbers: ");
	scanf("%d%d",&a,&b);
	printf("\n Enter Arithemetic operator: ");
	fflush(stdin);
	sn=getchar();
	switch(sn)
	{
		case '+' :
			res=a+b;
			break;
		case '-' :
			res=a-b;
			break;
		case '*' :
			res=a*b;
			break;
		case '%' :
			res=a%b;
			break;
		case '/' :
			res=a/b;
			break;
		default :
			printf("\n you do not know what arithmetic operator is");
	}
		printf("\n Result = %d ",res);
}