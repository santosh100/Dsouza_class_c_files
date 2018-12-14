#include<stdio.h>
#include<conio.h>
void main()
{
	char n[20],f;
	int i=0,j=0;
	clrscr();
	printf("\n Enter string: ");
	gets(n);
	printf("\n Enter any character to find: ");
	fflush(stdin);
	f=getchar();
	while(n[i]!='\0')
	{
		if(n[i]==f)
		j++;
	i++;
	}
	printf("\n character %c founfd %d times",f,j);
}