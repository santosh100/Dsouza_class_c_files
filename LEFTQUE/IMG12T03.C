#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int n,t,m,s,j;
	clrscr();
	printf("Enter till:\t");
	scanf("%d",&t);
	for(s=0,n=1-t;n<t;n++)
	{
		m=t-abs(n);
		for(j=1;j<=m;j++)
			printf("%5d",++s);
		if(n>=0)
		{
		    j--;
		    s=((s-j)-j)+1;
		}
	printf("\n");
	}
}
