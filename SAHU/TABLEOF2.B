#include<conio.h>
void main()
{
	int a=2,i=1, s=0;
	clrscr();
	while (i<=10)
	{
		s=a*i;
		printf("%5d",s);
		i++;
	}
	getch();
}