#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3],b[3],i,t,s,x;
	clrscr();
	printf("\n Enter three no: ");
	for(i=0;i<3;i++)
	{
		scanf("%d",&a[i]);
		for(s=0,x=0,t=a[i];t>0;t/=10)
		{
			s=t%10;
			x=x+s;
		}
			b[i]=x;
	}
	for(i=0;i<3;i++)
		printf("\n sum of %d = %d",a[i],b[i]);
}