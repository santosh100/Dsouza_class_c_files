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
		if(n>(t-m)+1)
		    printf("   ");
		else
		    printf("%3c",64+n);
		if(j>=0)
		    n--;
		else
		    n++;
	    }
	    printf("\n");
	}
}
