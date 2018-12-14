#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
void main()
{
	char *n;
	int i,j,k,x;
	clrscr();
	printf("\n Enter size of pointer: ");
	scanf("%d",&x);
	n=(char*)calloc(x,sizeof(char));
	printf("\n Enter string: ");
	fflush(stdin);
	gets(n);
	strlwr(n);
	for(j=0,i=0,k=0;*(n+i)!='\0';i++)
	{
	    if(isalpha(*(n+i)))
	    {
		if(*(n+i)=='a'||*(n+i)=='e'||*(n+i)=='i'||*(n+i)=='o'||*(n+i)=='u')
		j++;
		else
			k++;
	      }
	}
	printf("\n No of vowels in string = %d \n No of consonants in string = %d",j,k);
}