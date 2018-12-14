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
void perfectn(int*a,int*b,int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
	    for(*(b+i)=0,j=1;j<=*(a+i)/2;j++)
	    {
		if(*(a+i)%j==0)
		    *(b+i)+=j;
	    }
	    if(*(b+i)==*(a+i))
		*(b+i)=1;
	    else
		*(b+i)=0;
	}
}
void print(int*b,int n)
{
	int i;
	printf("\n printing values where 1 = Perfect no and 0 = Not perfect no\n");
	for(i=0;i<n;i++)
	    printf("%5d",*(b+i));
}
void main()
{
	int *a,*b,x;
	clrscr();
	printf("\n Enter size of pointer: ");
	scanf("%d",&x);
	a=(int*)malloc(x*sizeof(int));
	b=(int*)malloc(x*sizeof(int));
	input(a,x);
	perfectn(a,b,x);
	print(b,x);
}