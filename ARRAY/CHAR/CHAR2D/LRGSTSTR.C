#include<stdio.h>
#include<conio.h>
void main()
{
	char n[5][20];
	int i,j,k;
	clrscr();
	printf("\n Enter five string \n");
	for(i=0;i<5;i++)
	  gets(n[i]);
	for(i=0,j=0,k=0;i<5;i++)
	{
		if(strlen(n[i])>strlen(n[j]))
			j=i;
		else
		  if(strlen(n[i])<strlen(n[k]))
			k=i;
	}
	printf("\n largest string:   %s \n smallest string:   %s",n[j],n[k]);
}