#include<stdio.h>
#include<conio.h>
void main()
{
	char n[5][20],f;
	int i,j,ctr=0;
	clrscr();
	printf("\n Enter 5 strings: ");
	for(i=0;i<5;i++)
	    gets(n[i]);
	printf("\n Enter char to find: ");
	fflush(stdin);
	f=getch();
	for(i=0;i<5;i++)
	{
	    for(j=0;n[i][j]!='\0';j++)
	    {
		if(n[i][j]==f)
		    ctr++;
	    }
	}
	printf("\n found %c  %d times",f,ctr);
}