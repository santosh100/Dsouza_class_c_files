		//THIS PROGRAM SHOWS YOU THE LOGIC OF MAGIC MATRIX ( LOGIC 1 )

#include<stdio.h>
#include<conio.h>
void main()
{
	int a[15][15];
	int i,j,k,n,x,y;
	int p=0,q=0;
	clrscr();
	printf("\n Enter size of matrix which should be >=3 ,<=15 and odd: ");
	scanf("%d",&k);
	i=0;
	j=k/2;
	for(n=1;n<=k*k;)
	{
	    a[i][j]=n;
	    n++;
	    if((n-1)%k==0)
		i++;
	    else
	    {
		i--;
		j--;
	    }
	    if(i<0)
		i=k-1;
	    if(j<0)
		j=k-1;
	}
	for(y=3,i=0;i<k;i++,y+=2)
	{
		a[k][i]=0;
		a[i][k]=0;
	    for(x=10,j=0;j<k;j++,x+=5)
	    {
		if(i==j)
		    p+=a[i][j];
		if(i+j==k-1)
		    q+=a[i][j];
		a[k][i]+=a[j][i];
		a[i][k]+=a[i][j];
		gotoxy(x,y);
		printf("%d",a[i][j]);
	    }
		gotoxy(x,y);
		printf("%d",a[i][k]);
	}
	for(x=10,i=0;i<k;i++,x+=5)
	{
		gotoxy(x,y);
		printf("%d",a[k][i]);
	}
	 gotoxy(5,y);
	 printf("%d",q);
	gotoxy(x,y);
	printf("%d",p);

}
