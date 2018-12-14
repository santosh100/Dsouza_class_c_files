#include<stdio.h>
#include<conio.h>
#include<alloc.h>
void input(int*a,int n)
{
	int i;
	printf("\n Enter %d values: ",n);
	for(i=0;i<n;i++)
	    scanf("%d",(a+i));
}
void descend(int*a,int n)
{
	int i,j,t;
	for(i=0;i<n-1;i++)
	{
	    for(j=0;j<((n-1)-i);j++)
	    {
		if(*(a+j)<*(a+(j+1)))
		{
		    t=*(a+j);
		    *(a+j)=*(a+(j+1));
		    *(a+(j+1))=t;
		}
	    }
	}
}
void print(int*a,int n)
{
	int i;
	printf("\n printing descending order: ");
	for(i=0;i<n;i++)
	    printf("%5d",*(a+i));
}
void main()
{
	int *a,x;
	clrscr();
	printf("\n Enter size of pointer: ");
	scanf("%d",&x);
	a=(int*)malloc(x*sizeof(int));
	input(a,x);
	descend(a,x);
	print(a,x);
}