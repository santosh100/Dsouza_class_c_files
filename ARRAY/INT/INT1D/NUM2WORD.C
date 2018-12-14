#include<stdio.h>
#include<conio.h>
void main()
{
	int n,t,s;
	clrscr();
	printf("\n Enter any no: ");
	scanf("%d",&n);
	for(t=0,s=0;n>0;n/=10)
	{
		t=n%10;
		s=s*10+t;
	}
	for( ;s>0;s/=10)
	{
		t=s%10;
		switch(t)
		{
			case 0 :
				printf("Zero ");
				break;
			case 1 :
				printf("One ");
				break;
			case 2 :
				printf("Two ");
				break;
			case 3 :
				printf("Three ");
				break;
			case 4 :
				printf("Four ");
				break;
			case 5 :
				printf("Five ");
				break;
			case 6 :
				printf("Six ");
				break;
			case 7 :
				printf("Seven ");
				break;
			case 8 :
				printf("Eight ");
				break;
			case 9 :
				printf("Nine ");
				break;
			default :
				printf("\n you have not entered any no");

		}
	}
}