#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3],b[3],i,p,x;
	clrscr();
	printf("\n Enter three no: ");
	for(i=0;i<3;i++)
	{
		scanf("%d",&a[i]);
		for(x=0,p=1;p<=a[i]/2;p++)
		{
			if(a[i]%p==0)
				x=x+p;
		}
		if(x==a[i])
			b[i]=1;
		else
			b[i]=0;
	}
	printf("\n 1 is perfect no: \n 0 is not perfect no:\n");
	for(i=0;i<3;i++)
		printf("\n %d is %d ",a[i],b[i]);
}