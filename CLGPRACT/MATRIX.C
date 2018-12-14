#include<stdio.h>
#include<conio.h>
void main()
{
	int a[2][2]={5,5,5,5};
	int b[2][2]={2,2,2,2};
	int c[2][2];
	int i,j,k;
	clrscr();
	printf("\n addition of two matrix: \n");
	for(i=0;i<2;i++)
	{
	    for(j=0;j<2;j++)
	    {
		c[i][j]=a[i][j]+b[i][j];
		printf("%3d",c[i][j]);
	    }
	    printf("\n");
	}
	printf("\n subtraction of two matrix: \n");
	for(i=0;i<2;i++)
	{
	    for(j=0;j<2;j++)
	    {
		c[i][j]=a[i][j]-b[i][j];
		printf("%3d",c[i][j]);
	    }
	    printf("\n");
	}
	printf("\n multiplication of two matrix:\n");
	for(i=0;i<2;i++)
	{
	    for(k=0;k<2;k++)
	    {
		c[i][k]=0;
		for(j=0;j<2;j++)
			c[i][k]=a[i][j]*b[j][k];
			printf("%3d",c[i][k]);
	    }
	    printf("\n");
	}
	printf("\n transpose of matrix:\n");
	for(i=0;i<2;i++)
	{
	    for(j=0;j<2;j++)
	    {
		c[j][i]=a[i][j];
		printf("%3d",c[j][i]);
	    }
	    printf("\n");
	}

}