#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3],b[3],c[3],i;
	clrscr();
	printf("\n Enter three no: ");
	for(i=0;i<3;i++)
		scanf("%d",&a[i]);
	printf("\n Enter three no: ");
	for(i=0;i<3;i++)
		scanf("%d",&b[i]);
	for(i=0;i<3;i++)
		c[i]=a[i]+b[i];
	for(i=0;i<3;i++)
		printf("%5d",c[i]);
}