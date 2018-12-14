#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int i,j,m,n,t;
	clrscr();
	printf("\n Enter limit: ");
	scanf("%d",&t);
	for(i=1-t;i<t;i++)
	{
	    m=t-abs(i);
	    for(n=1,j=1-t;j<t;j++)
	    {
		if(n>m)
		    printf("   ");
		else
		    printf("%3d",n);
		if(j>=0)
		    n--;
		else
		    n++;
	    }
	    printf("\n");
	}
}
