#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3],b[3],c[6],i;
	clrscr();
	printf("\n Enter three no: ");
	for(i=0;i<3;i++)
	{
		scanf("%d",&a[i]);
		c[2-i]=a[i];
	}
	printf("\n Enter three no: ");
	for(i=0;i<3;i++)
	{
		scanf("%d",&b[i]);
		c[5-i]=b[i];
	}
	for(i=0;i<6;i++)
	printf("%5d",c[i]);

}