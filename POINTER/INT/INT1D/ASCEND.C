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
void ascend(int*a,int n)
{
	int i,j,t;
	for(i=0;i<n-1;i++)
	{
	    for(j=i+1;j<n;j++)
	    {
		if(*(a+i)>*(a+j))
		{
		    t=*(a+i);
		    *(a+i)=*(a+j);
		    *(a+j)=t;
		}
	    }
	}
}
void print(int*a,int n)
{
	int i;
	printf("\n printing values: ");
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
	ascend(a,x);
	print(a,x);

}