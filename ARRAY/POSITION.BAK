#include<stdio.h>
#include<conio.h>
void main()
{
	char n[20],m[20],s[20];
	int i,j,k,p;
	clrscr();
	printf("\n Enter string: ");
	gets(n);
	printf("\n Enter string to add: ");
	gets(m);
	printf("\n Enter position: ");
	scanf("%d",&p);
	for(i=0,j=0;n[i]!='\0';i++)
	{
		if(i==p-1)
		{
			s[j++]=' ';
		for(k=0;m[k]!='\0';k++)
			s[j++]=m[k];
			s[j++]=' ';
		}
		else
			s[j++]=n[i];
	}
		s[j]='\0';
	printf("\n changed string = %s",s);

}