#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3],b[3],i,l,s,j,k,x,p;
	clrscr();
	printf("\n Enter three no: ");
	for(i=0;i<3;i++)
	{
		scanf("%d",&a[i]);
		for(j=0,k=a[i];k>0;k/=10)
			j++;
		for(s=0,k=a[i];k>0;k/=10)
		{
			l=k%10;
			for(x=1,p=j;p>0;p--)
				x=x*l;
			s=s+x;
		}
		if(s==a[i])
			b[i]=1;
		else
			b[i]=0;
	}
	printf("\n 1 is Armstrong and 0 is not Armstrong \n");
	for(i=0;i<3;i++)
		printf("\n %d is %d ",a[i],b[i]);
}