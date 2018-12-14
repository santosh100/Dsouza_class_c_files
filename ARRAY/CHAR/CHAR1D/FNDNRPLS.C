#include<stdio.h>
#include<conio.h>
void main()
{
	char n[20],f,r;
	int i=0;
	clrscr();
	printf("\n Enter a string: ");
	gets(n);
	printf("\n Enter character to find: ");
	f=getchar();
	printf("\n Enter character to replace: ");
	fflush(stdin);
	r=getchar();
	while(n[i]!='\0')
	{
		if(n[i]==f)
			n[i]=r;
	i++;
	}
	printf("\n Replaced string is: %s",n);
}