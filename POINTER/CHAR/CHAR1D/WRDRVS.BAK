#include<stdio.h>
#include<conio.h>
#include<alloc.h>
void main()
{
	char *n,*m;
	int i,j,l,p,x;
	clrscr();
	printf("\n Enter size of pointer: ");
	scanf("%d",&x);
	n=(char*)calloc(x,sizeof(char));
	m=(char*)calloc(x,sizeof(char));
	printf("\n Enter string: ");
	fflush(stdin);
	gets(n);
	for(i=0,j=0,l=0,p=0;*(n+i)!='\0';i++)
	{
	    if(*(n+i)==' '||*(n+i+1)=='\0')
	    {
		j=i;
		while(j>=p)
		    *(m+l++)=*(n+j--);
		    p=i;
	    }
	}
	*(m+l)='\0';
	printf("\n Word reverse = %s",m);
}