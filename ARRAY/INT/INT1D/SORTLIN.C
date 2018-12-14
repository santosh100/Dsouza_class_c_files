	    /* this program is the example of linear sort */

#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i,j,t;
	clrscr();
	printf("\n Enter five no: ");
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
	for(i=0;i<4;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]>a[j])              // we use > for Assending order
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	printf("\n Assending order: ");
	for(i=0;i<5;i++)
		printf("%5d",a[i]);
	printf("\n Decending order: ");
	for(i=4;i>=0;i--)
		printf("%5d",a[i]);
}