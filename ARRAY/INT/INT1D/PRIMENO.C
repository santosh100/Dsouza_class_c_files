#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3],b[3],i,p;
	clrscr();
	printf("\n Enter three no: ");
	for(i=0;i<3;i++)
	{
		scanf("%d",&a[i]);
		for(p=a[i]/2;p>1;p--)
		{
			if(a[i]%p==0)
			{
				b[i]=0;
				break;
			}
		}
		if(p==1)
			b[i]=1;
	}
	printf("\n 1 = prime no: \n 0 = not prime no:");
	for(i=0;i<3;i++)
		printf("\n %d is %d ",a[i],b[i]);
}