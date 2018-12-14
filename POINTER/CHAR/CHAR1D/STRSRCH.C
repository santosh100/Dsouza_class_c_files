#include<stdio.h>
#include<conio.h>
void main()
{
	char *n,*m;
	int i,j,k,flag=0,t;
	clrscr();
	printf("\n Enter sizeof string: ");
	scanf("%d",&t);
	n=(char*)malloc(t*sizeof(char));
	m=(char*)malloc(t*sizeof(char));
	printf("\n Enter string: ");
	fflush(stdin);
	gets(n);
	printf("\n Enter string to search: ");
	fflush(stdin);
	gets(m);
	for(i=0;*(n+i)!='\0';i++)
	{
		if(*(n+i)==*(m+0))
		{
			for(j=1,k=i+1;*(m+j)!='\0';j++,k++)
			{
			  if(*(n+k)!=*(m+j))
			    break;
			  if(*(m+j+1)=='\0')
			    flag=1;
			}
		}
		if(flag==1)
			  break;
	}
	if(flag==1)
		printf("\n search completed found %s",m);
	else
		printf("\n search conpleted not found %s",m);
}
