#include<stdio.h>
#include<conio.h>
int i=5;
void main()
{
	if(i)
	{
		printf("%5d",i--);
		main();
	}
}