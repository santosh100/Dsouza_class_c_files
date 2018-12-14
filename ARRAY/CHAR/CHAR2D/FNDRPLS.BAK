#include<stdio.h>
#include<conio.h>
void main()
{
	char n[5][20],f,r;
	int i,j;
	clrscr();
	printf("\n Enter five string\n");
	for(i=0;i<5;i++)
		gets(n[i]);
	printf("\n Enter character to find: ");
	fflush(stdin);
	scanf("%c",&f);
	printf("\n Enter character to replace: ");
	fflush(stdin);
	scanf("%c",&r);
	for(i=0;i<5;i++)
	{
		for(j=0;n[i][j]!='\0';j++)
		{
			if(n[i][j]==f)
			  n[i][j]=r;
		}
		printf("\n %s",n[i]);
	}
}