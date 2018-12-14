#include<stdio.h>
#include<conio.h>
void main()
{
	char n[20];
	int i=0;
	clrscr();
	printf("\n Enter a string: ");
	gets(n);
	if(n[i]>=97&&n[i]<=122)
		n[i]-=32;
		i++;
	while(n[i]!='\0')
	{
		if(n[i]==' ')
		{
			i++;
			if(n[i]>=97&&n[i]<=122)
				n[i]-=32;
		}
		else
			if(n[i]>=65&&n[i]<=90)
				n[i]+=32;
	i++;
	}
	printf("\n Tittlecase: %s",n);
}