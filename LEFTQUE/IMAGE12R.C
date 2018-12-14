#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int n,r,i,m,s;
	clrscr();
	printf("Enter range:\t");
	scanf("%d",&r);
	for(s=0,n=1-r;n<r;n++)
	{
		m=r-abs(n);
		for(i=m;i<r;i++)
			printf("     ");
		for(i=1;i<m*2;i++)
			printf("%5d",++s);
		if(n>=0)
		{
		    i-=2;
		    s=((s-i)-i);
		}
	printf("\n");
	}
}
