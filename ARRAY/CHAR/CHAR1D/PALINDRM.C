#include<stdio.h>
#include<conio.h>
void main()
{
	char n[20];
	int i=0,j,p;
	clrscr();
	printf("\n Enter string: ");
	gets(n);
	while(n[i]!='\0')
		i++;
	i--;
	p=i/2;
	for(j=0;j<p;j++)
	{
		if(n[j]==n[i])
			i--;
		else
		{
			printf("\n %s is not palindrom",n);
			break;
		}
	}
	if(j==i)
		printf("\n %s is palindrom",n);
}