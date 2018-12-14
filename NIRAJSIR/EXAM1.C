#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	char *ptr;
	ptr=&a;
	a=511;
	b=*ptr;
	printf("\n %3d%3d%3d",a,b,*ptr);
	    *ptr=10;
	printf("\n %3d%3d%3d",a,b,*ptr);
}