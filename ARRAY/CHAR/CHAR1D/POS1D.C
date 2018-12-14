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
	for(k=0,i=0;n[i]!='\0';i++)
	{
		if(i==p-1)
		{
			for(j=0;m[j]!='\0';j++)
				s[k++]=m[j];
		}
		s[k++]=n[i];
	}
		s[k]='\0';
		printf("\n %s ",s);
}