#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int i,j,k,p,t;
	clrscr();
	printf("\n Enter till: ");
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    for(k=1,p=0,j=1-t;j<t;j++)
	    {
		if(p<i*2)
		{
		    printf("   ");
		       p++;
		}
		else
		{
		    printf("%3c",91-k);
		    if(j>=i)
			k--;
		    else
			k++;
		}
	    }
	    printf("\n");
	}
}
