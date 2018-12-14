#include<stdio.h>
#include<conio.h>
void main()
{

	int sal,bonus=0;
	char grade;
	clrscr();
	printf("\n enter salary:");
	scanf("%d",&sal);
	printf("\n enter grade:");
	fflush(stdin);
	scanf("%c",&grade);
    //   grade=getchar();
	if(grade=='A' || grade=='a')
		bonus=sal*.1;
	else
		if(grade=='b' || grade=='B')
			bonus=sal*.2;
		else
			if(grade=='c' || grade=='C')
				bonus=sal*.3;
			else
				bonus=sal*.08;
	printf("bonus=%d",bonus);
	getch();
}