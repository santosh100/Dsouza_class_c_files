#include<stdio.h>
#include<conio.h>
int gcd(int a, int b)
{
	while(a!=b)
	{
	    if(a>b)
		return gcd(a-b,b);
	    else
		return gcd(a,b-a);
	}
	return a;
}
int hcf(int a, int b)
{
	while(a!=b)
	{
	    if(a>b)
		return hcf(a-b,b);
	    else
		return hcf(a,b-a);
	}
	return a;
}
void main()
{
	int a,b,result=0;
	clrscr();
	printf("\n Enter the two numbers to find their GCD & HCF: ");
	scanf("%d%d",&a,&b);
	result=gcd(a,b);
	result=hcf(a,b);
	printf("\n The GCD of %d and %d is %d",a,b,result);
	printf("\n The HCF of %d and %d is %d",a,b,result);
}