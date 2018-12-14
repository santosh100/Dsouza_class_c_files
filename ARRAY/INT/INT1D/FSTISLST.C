#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],b[5],i;
	clrscr();
	printf("Enter five no: ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
		b[4-i]=a[i];
	}
	for(i=0;i<5;i++)
		printf("%5d",b[i]);
}