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
void armstrno(int*a,int*b,int n)
{
	int i,j,l,k,s,t,p;
	for(i=0;i<n;i++)
	{
	    for(j=0,l=*(a+i);l>0;l/=10)
		j++;
	    for(p=0,s=0,l=*(a+i);l>0;l/=10)
	    {
		s=l%10;
		for(t=1,k=0;k<j;k++)
			t=t*s;
		p+=t;
	    }
	    if(p==*(a+i))
		*(b+i)=1;
	    else
		*(b+i)=0;
	}
}
void print(int*b,int n)
{
	int i;
	printf("\n printing values where 1 = Armstrong no and 0 = Not Armstrong no\n");
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
	armstrno(a,b,x);
	print(b,x);
}