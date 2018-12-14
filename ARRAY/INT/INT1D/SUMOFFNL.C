#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3],b[3],s,i,f;
	clrscr();
	printf("\n Enter three no: ");
	for(i=0;i<3;i++)
	{
		scanf("%d",&a[i]);
		f=a[i]%10;
		for(s=a[i];s>=10;s/=10);
		f=f+s;
		b[i]=f;
	}
	for(i=0;i<3;i++)
		printf("\n sum of first and last of %d = %d",a[i],b[i]);
}