#include<stdio.h>
#include<conio.h>
void main()
{
	char n[5][20];
	int i,j,p,k;
	clrscr();
	printf("\n Enter five string:\n");
	for(i=0;i<5;i++)
	  gets(n[i]);
	for(i=0;i<5;i++)
	{
		for(p=0,j=0;n[i][j]!='\0';j++)
		{
			if(n[i][j]==' '||n[i][j+1]=='\0')
			{
				for(k=j;k>=p;k--)
				printf("%c",n[i][k]);
				printf(" ");
				p=j;
		       }
		}
		printf("\n");
	}
}