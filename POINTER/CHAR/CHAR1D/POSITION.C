#include<stdio.h>
#include<conio.h>
#include<alloc.h>
void main()
{
	char *n,*m,*s;
	int i,j,k,t,x;
	clrscr();
	printf("\n Enter size of pointer: ");
	scanf("%d",&x);
	n=(char*)calloc(x,sizeof(char));
	m=(char*)calloc(x,sizeof(char));
	s=(char*)calloc(x,sizeof(char));
	printf("\n Enter string: ");
	fflush(stdin);
	gets(n);
	printf("\n Enter string to add: ");
	fflush(stdin);
	gets(m);
	printf("\n Enter position: ");
	scanf("%d",&t);
	for(i=0,j=0,k=0;*(n+i)!='\0';i++)
	{
	    if(i==t-1)
	    {
		    *(s+k++)=' ';
		while(*(m+j)!='\0')
		    *(s+k++)=*(m+j++);
		    *(s+k++)=' ';
	    }
		*(s+k++)=*(n+i);
	}
		*(s+k++)='\0';
		printf("\n Changed string = %s",s);
}