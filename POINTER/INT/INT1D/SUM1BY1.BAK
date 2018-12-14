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
void sum(int*pa,int*pb,int*pc,int n)
{
	int i;
	for(i=0;i<n;i++)
	    *(pc+i)=*(pa+i)+*(pb+i);
}
void print(int*pc,int n)
{
	int i;
	printf("\n printing values: ");
	for(i=0;i<n;i++)
	    printf("%5d",*(pc+i));
}
void main()
{
	int *a,*b,*c,x;
	clrscr();
	printf("\n Enter size of pointer: ");
	scanf("%d",&x);
	a=(int*)malloc(x*sizeof(int));
	b=(int*)malloc(x*sizeof(int));
	c=(int*)malloc(x*sizeof(int));
	input(a,x);
	input(b,x);
	sum(a,b,c,x);
	print(c,x);
}