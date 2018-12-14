#include<stdio.h>
#include<conio.h>
void main()
{
	int n[3][5];                     //column sort using linear sort
	int i,j,k,x,y,t;
	clrscr();
	printf("\n Enter 3*5 matrix");
	for(y=3,i=0;i<3;i++,y+=2)
	{
	    for(x=5,j=0;j<5;j++,x+=5)
	    {
		gotoxy(x,y);
		scanf("%d",&n[i][j]);
	    }
	}
	for(j=0;j<5;j++)
	{
	    for(i=0;i<2;i++)
	    {
		for(k=i+1;k<3;k++)
		{
		    if(n[i][j]>n[k][j])
		    {
			t=n[i][j];
			n[i][j]=n[k][j];
			n[k][j]=t;
		    }
		}
	    }
	}
	printf("\n column assending of entered matrix");
	for(y=13,i=0;i<3;i++,y+=2)
	{
	    for(x=5,j=0;j<5;j++,x+=5)
	    {
		gotoxy(x,y);
		printf("%d",n[i][j]);
	    }
	}

}