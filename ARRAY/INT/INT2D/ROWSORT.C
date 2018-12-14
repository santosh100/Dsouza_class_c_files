#include<stdio.h>
#include<conio.h>
void main()
{
	int n[3][5];                //row sort using bubble sort
	int i,j,k,x,y,t;
	clrscr();
	printf("\n Enter 3*5 matrix:");
	for(y=3,i=0;i<3;i++,y+=2)
	{
	    for(x=5,j=0;j<5;j++,x+=5)
	    {
		gotoxy(x,y);
		scanf("%d",&n[i][j]);
	    }
	}
	for(i=0;i<3;i++)
	{
	    for(j=0;j<4;j++)
	    {
		for(k=0;k<4-j;k++)
		{
		  if(n[i][k]>n[i][k+1])
		  {
			t=n[i][k];
			n[i][k]=n[i][k+1];
			n[i][k+1]=t;
		  }
		}
	    }
	}
	printf("\n Row Assending of enrered matrix");
	for(y=13,i=0;i<3;i++,y+=2)
	{
	    for(x=5,j=0;j<5;j++,x+=5)
	    {
		gotoxy(x,y);
		printf("%d",n[i][j]);
	    }
	}
}