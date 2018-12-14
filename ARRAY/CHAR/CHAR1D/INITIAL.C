#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
	char n[20],m[20];
	int i,j,p=0;
	clrscr();
	printf("\n Enter a string: ");
	gets(n);
	m[0]=toupper(n[0]);
	for(i=1,j=1;n[i]!='\0';i++)
	{
		if(n[i]==' ')
		{
			i++;
			m[j++]='.';
			m[j++]=toupper(n[i]);
			p=i+1;
		}
	}
	while(n[p]!='\0')
		m[j++]=tolower(n[p++]);
		m[j]='\0';
	printf("\n Initial surname: %s",m);
}