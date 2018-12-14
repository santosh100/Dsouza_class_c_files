#include<stdio.h>
#include<conio.h>
int perno(int s, int i, int n)
{
	if(i<=n/2)
	{
	    if(n%i==0)
		s+=i;
	    return(perno(s,++i,n));
	}
	return(s);
}
void main()
{
	int s=0,i=1,n;
	clrscr();
	printf("\n Enter any no to check: ");
	scanf("%d",&n);
	s= perno(s,i,n);
	if(s==n)
	    printf("%d is perfect no ",n);
	else
	    printf("\n %d is not perfect no ",n);
}