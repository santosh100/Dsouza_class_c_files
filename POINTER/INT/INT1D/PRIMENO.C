#include<stdio.h>
#include<conio.h>
#include<alloc.h>
void input(int*p,int n)
{
	int i;
	printf("\n Enter %d values: ",n);
	for(i=0;i<n;i++)
	    scanf("%d",(p+i));
}
void primeno(int*a,int*b,int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=2;j<=*(a+i)/2;j++)
		{
		    if(*(a+i)%j==0)
			break;
		}
		if(j>*(a+i)/2)
			*(b+i)=1;
		else
			*(b+i)=0;
	}
}
void print(int*b,int n)
{
	int i;
	printf("\n printing values where 1 = Prime no and 0 = Not prime no\n");
	for(i=0;i<n;i++)
	    printf("%5d",*(b+i));
}
void main()
{
	int*a,*b,x;
	clrscr();
	printf("\n Enter size of pointer: ");
	scanf("%d",&x);
	a=(int*)malloc(x*sizeof(int));
	b=(int*)malloc(x*sizeof(int));
	input(a,x);
	primeno(a,b,x);
	print(b,x);
}