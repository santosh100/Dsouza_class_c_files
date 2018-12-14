#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char n[5][20],m[20];
	int i,j,x;
	clrscr();
	printf("\n Enter five string:\n");
	for(i=0;i<5;i++)
	  gets(n[i]);
	for(i=0;i<4;i++)
	{
		for(j=i+1;j<5;j++)
		{
		  x=strcmpi(n[i],n[j]);
		  if(x>0)
		  {
			strcpy(m,n[i]);
			strcpy(n[i],n[j]);
			strcpy(n[j],m);
		  }
		}
	}
	printf("\n Assending order:\n");
	for(i=0;i<5;i++)
	printf("\n %s",n[i]);
}