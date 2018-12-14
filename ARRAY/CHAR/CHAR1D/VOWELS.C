	  /*Program to find out vowels and consonants from string*/

#include<stdio.h>
#include<conio.h>
void main()
{
	char n[20];
	int i,j,k;
	clrscr();
	printf("\n Enter a string: ");
	gets(n);
	for(i=0,j=0,k=0;n[i]!='\0';i++)
	{
		if(n[i]>=65&&n[i]<=90)
			n[i]+=32;
		if(n[i]=='a'||n[i]=='e'||n[i]=='i'||n[i]=='o'||n[i]=='u')
			j++;
		else
		  if(n[i]!=' ')
			k++;
	}
	printf("\n vowels = %d\n consonants = %d",j,k);
}