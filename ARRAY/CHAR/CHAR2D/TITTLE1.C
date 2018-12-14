#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char n[5][20];
	int i,j;
	clrscr();
	for(i=0;i<5;i++)
	{
		printf("\n Enter string:  ");
		gets(n[i]);
		strlwr(n[i]);
		n[i][0]=toupper(n[i][0]);
		for(j=0;n[i][j]!='\0';j++)
		{
			if(n[i][j]==' ')
			{
			  j++;
			  n[i][j]=toupper(n[i][j]);
			}
		}
		printf("\n Tittle case:  %s",n[i]);
	}
}