#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3],b[3];
	int i,j,p,t,x,y;
	clrscr();
	printf("\n Enter three no: ");
	for(i=0;i<3;i++)
	{
	scanf("%d",&a[i]);
		for(x=0,p=a[i],j=p*p;p>0;p/=10)
		{
			t=p%10;
			x=x*10+t;
		}
		for(x=x*x,y=0;x>0;x/=10)
		{
			t=x%10;
			y=y*10+t;
		}
		if(y==j)
			b[i]=1;
		else
			b[i]=0;
	}
	printf("\n 1 is magic no and 0 is not magic no");
	for(i=0;i<3;i++)
		printf("\n %d is %d",a[i],b[i]);
}