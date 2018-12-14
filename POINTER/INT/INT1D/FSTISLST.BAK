#include<stdio.h>
#include<conio.h>
#include<alloc.h>
void input(int *p,int n)
{
	int i;
	printf("\n Enter %d values: ",n);
	for(i=0;i<n;i++)
	    scanf("%d",(p+i));
}
void reverse(int*pa,int*pb,int n)
{
	int i;
	for(i=0;i<n;i++)
	   *(pb+(n-1)-i)=*(pa+i);
}
void print(int*p,int n)
{
	int i;
	for(i=0;i<n;i++)
	    printf("%5d",*(p+i));
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
	reverse(a,b,x);
	print(b,x);
}