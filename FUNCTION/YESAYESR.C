			/* Example of yes argument/parameter yes return */
#include<stdio.h>
#include<conio.h>
int rvsno(int n)
{
	int r,p=0;
	for(p=0;n>0;n/=10)
	{
	    r=n%10;
	    p=p*10+r;
	}
	return (p);
}
void magicno()
{
	int n,r,s;
	printf("\n Enter no: ");
	scanf("%d",&n);
	s=n*n;
	r=rvsno(n);
	r=r*r;
	r=rvsno(r);
	if(r==s )
	    printf("\n magic no %d",n);
	else
	    printf("\n not magic no %d",n);
}
void main()
{
	magicno();
}