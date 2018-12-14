#include<stdio.h>
#include<conio.h>
void main()
{
	char n[5][20];
	int i,j,ctr=0;
	clrscr();
	printf("\n Enter five string \n");
	for(i=0;i<5;i++)
	  gets(n[i]);
	for(i=0;i<5;i++)
	{
		ctr++;
		for(j=0;n[i][j]!='\0';j++)
		{
			if(n[i][j]==' ')
			  ctr++;
		}
	}
	printf("\n total words in string is %d",ctr);
}