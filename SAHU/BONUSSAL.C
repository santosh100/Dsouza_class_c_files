#include<stdio.h>
#include<conio.h>
void main()
{
	int sal,bonus;
	clrscr();
	printf("\n enter salary:\n");
	scanf("%d",sal);
	if(sal>1000)
		bonus=sal*.1;
	else
		if(sal>5000)
			bonus=sal*.08;
		else
			if(sal>10000)
				bonus=sal*.05;
	printf("\n bonus=%d",bonus);
	getch();

}