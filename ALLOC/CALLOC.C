#include<stdio.h>
#include<conio.h>
void main()
    {
	int *a,n,i;
	clrscr();
	printf("\n enter how many elements : ");
	scanf("%d",&n);
     //	a=(int *)malloc(n*sizeof(int));
	a=(int *)calloc(n*sizeof(int));      //calloc allocates a block (nitems * size) bytes and clears it to 0.

       for(i=0;i<n;i++,a++)
	   printf("\n %p = %d",a,*a);
    }