#include<stdio.h>
#include<conio.h>
void main()
{
	char sn;
	int a,b,res=0;
	clrscr();
	printf("\n Enter two numbers: ");
	scanf("%d%d",&a,&b);
	printf("\n Enter Arithemetic operator: ");
	fflush(stdin);
	sn=getchar();
	if(sn=='+')
		res=a+b;
	else
	  if(sn=='-')
		res=a-b;
	  else
	    if(sn=='*')
		res=a*b;
	    else
	      if(sn=='%')
		res=a%b;
	      else
		if(sn=='/')
			res=a/b;
		else
			printf("\n you do not know what arithmetic operator is");
		printf("\n Result = %d",res);
}