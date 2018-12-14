#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char n[20];
	int j,l,p;
	clrscr();
	printf("\n Enter a string: ");
	gets(n);
	l=strlen(n);
	l--;
	for(j=0,p=l;j<l/2;j++)
	{
		if(n[j]==n[p])
		    p--;
		else
		{
		    printf("\n %s is not palindrom",n);
		    break;
		}
	}
	if(p==j)
		printf("\n %s is palindrom",n);
}