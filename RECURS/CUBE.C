#include<stdio.h>
#include<conio.h>
void cube(int t,long int i)
{           //  long int s=i*i*i;
	if(i<=t)
	{
	   //   printf("\n %d cube is %ld",i,s);
	    printf("\n %ld cube is %ld",i,i*i*i);
	    cube(t,++i);
	}
}
void main()
{
	int n;
	clrscr();
	printf("\n Enter limit: ");
	scanf("%d",&n);
	cube(n,1);
}