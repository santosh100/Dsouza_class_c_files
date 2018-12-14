#include<stdio.h>
#include<conio.h>
void main()
{
	char n[20];
	int i,j,p;
	clrscr();
	printf("\n Enter a string: ");
	gets(n);
	for(i=0,p=0;n[i]!='\0';i++)
	{
		if(n[i]==' '||n[i+1]=='\0')
		{
			for(j=i;j>=p;j--)
				printf("%c",n[j]);
			p=i;
		}
	}
}