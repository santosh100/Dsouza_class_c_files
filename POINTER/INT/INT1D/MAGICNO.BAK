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
void magicno(int*a,int*b,int n)
{
	int i,t,s,p,u;
	for(i=0;i<n;i++)
	{
		t=*(a+i)**(a+i);
		for(u=0;*(a+i)>0;*(a+i)/=10)
		{
			s=*(a+i)%10;
			u=u*10+s;
		}
		for(u=u*u,p=0;u>0;u/=10)
		{
			s=u%10;
			p=p*10+s;
		}
		if(p==t)
		    *(b+i)=1;
		else
		    *(b+i)=0;
	}
}
void print(int*b,int n)
{
	int i;
	printf("\n printing values");
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
	magicno(a,b,x);
	print(b,x);
}