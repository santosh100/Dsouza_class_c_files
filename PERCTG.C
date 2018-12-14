#include<stdio.h>
#include<conio.h>
void main()
{
	int s1,s2,s3,s4,s5,sum;
	float per;
	clrscr();
	printf("\n Enter marks of five subjects:  ");
	scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
	sum=s1+s2+s3+s4+s5;
	per=(float)sum/5;
	printf("\n total  %d\n percentage  %.2f",sum,per);
	getch();
}