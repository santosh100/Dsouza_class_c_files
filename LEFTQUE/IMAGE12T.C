#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int i,n,m,t;
	clrscr();
	printf("\n Enter till : ");
	scanf("%d",&t);
	for(i=1-t;i<t;i++)
	{
	    m=t-abs(i);
	    for(n=1;m>0;m--,n++)
		    printf("%5d",n);
	    printf("\n");
	}
}