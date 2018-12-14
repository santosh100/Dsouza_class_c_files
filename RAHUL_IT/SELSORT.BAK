#include<stdio.h>
#include<conio.h>
void selsort(int *p,int n)
{
	int i,j,t,loc;
	for(i=0;i<n-1;i++)
	{
	    t=p[i];
	    loc=i;
	    for(j=i+1;j<n;j++)
	    {
		if(p[j]<t)
		{
		    t=p[j];
		    loc=j;
		}
	    }
	    if(i!=loc)
	    {
		p[loc]=p[i];
		p[i]=t;
	    }
	}
}
void main()
{
	int a[5],i;
	clrscr();
	printf("\n Enter five numbers: ");
	for(i=0;i<5;i++)
	    scanf("%d",&a[i]);
	selsort(a,5);
	printf("\n After selection sort: ");
	for(i=0;i<5;i++)
	    printf("%5d",a[i]);
	getch();
}