#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int n,t,m,s,j;
	clrscr();
	printf("Enter till:\t");
	scanf("%d",&t);
	for(s=0,n=0-(t-1);n<t;n++)
	{
		m=t-abs(n);
		for(j=0;j<m;j++)
			printf("%5d",++s);
		if(n>=0)
		    s=((s-j)-j)+1;
	printf("\n");
	}
}
