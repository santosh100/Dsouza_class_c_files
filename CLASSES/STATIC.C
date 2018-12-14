#include<stdio.h>
#include<conio.h>
void main()
{
   static int i=5;     // static makes readable only compile time not run time
	if(i)
	{
		printf("%5d",i--);
		main();
	}
}