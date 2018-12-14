#include<stdio.h>
#include<conio.h>
void main()
   {
	int n;
      //	int s=1;
      //	long int s=1;
	long int s=1;
	clrscr();
	printf("enter any no: \n ");
	scanf("%d",&n);
	for( ;n>1;n--)
	s=s*n;
     //		s=(double)s*n;
	printf("factorial of entered no is=%ld",s);
      //	printf("factorial of entered no is=%ld",s);
     //	printf("factorial of entered no is=%d",s);



	getch();

}