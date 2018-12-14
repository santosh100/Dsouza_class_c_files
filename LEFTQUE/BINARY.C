		// Binary Search (Logic 1)

#include<stdio.h>
#include<conio.h>
#include<alloc.h>
void input(int*a,int t)
{
	int i;
	printf("\n Enter %d Numbers: \n",t);
	for(i=0;i<t;i++)
	    scanf("%d",(a+i));
}
void sorting(int*a,int t)
{
	int i,j,x;
	for(i=0;i<t-1;i++)
	{
	    for(j=0;j<((t-1)-i);j++)
	    {
		if(*(a+j)>*(a+(j+1)))
		{
			x=*(a+j);
			*(a+j)=*(a+(j+1));
			*(a+(j+1))=x;
		}
	    }
	}
}
void binryser(int*a,int t)
{
	int ser,p,k,i;
	char ans;
	do
	{
		printf("\n Enter any no to search: ");
		scanf("%d",&ser);
		i=t-1;
		p=0;
		while(1)
		{
			k=(i+p)/2;
			if(ser==*(a+k))
			{
			    printf("\n search found: ");
			    break;
			}
			else
			{
			    if(ser<*(a+k))
				i=k-1;
			    else
				p=k+1;
			}
		if(p>i)
		    {
		    printf("\n search not found: ");
		    break;
		    }
		}
			printf("\n want to cotinue press y/n");
			fflush(stdin);
			ans=getche();
	}while(ans=='Y'||ans=='y');
}
void main()
{
	int *a,t;
	char ans;
	clrscr();
	printf("\n Enter size of Array: ");
	scanf("%d",&t);
	a=(int*)calloc(t,sizeof(int));
	input(a,t);
	sorting(a,t);
	binryser(a,t);
}
