#include<stdio.h>
#include<conio.h>
#include<alloc.h>
#include<dos.h>
int **myplace(int k)
{
	int **t,i;
	t=(int**)malloc(k*sizeof(int));
	for(i=0;i<=k;i++)
	    *(t+i)=(int*)malloc(k*sizeof(int));
	return(t);
}
void mgcmtrx(int **a,int k)
{
	int i,m,n=(k)/2;
	for(i=1,m=0;i<=k*k;i++)
	{
	    *(*(a+m)+n)=i;
	    if(i%k==0)
		m++;
	    else
	    {
		m--;
		n--;
	    }
	    if(m<0)
		m=k-1;
	    if(n<0)
		n=k-1;
	}
}
void print(int**a,int k,int x,int y)
{
	int i,j,t=x,p=0,q=0;
	for(i=0;i<k;i++,y+=2)
	{
	    *(*(a+i)+k)=0;
	    *(*(a+k)+i)=0;
	    for(j=0,x=t;j<k;j++,x+=5)
	    {
		if(i==j)
		    p+=*(*(a+i)+j);
		if((i+j)==(k-1))
		    q+=*(*(a+i)+j);
		*(*(a+i)+k)+=*(*(a+i)+j);
		*(*(a+k)+i)+=*(*(a+j)+i);
		gotoxy(x,y);
		printf("%d",*(*(a+i)+j));
		delay(500);
		sound(j*200);
	    }
	    gotoxy(x,y);
	    textcolor(3);
	    cprintf("%d",*(*(a+i)+k));
	    delay(1000);
	    sound(300);
	}
	for(i=0,x=t;i<k;i++,x+=5)
	{
	    gotoxy(x,y);
	    textcolor(3);
	    sound(i*300);
	    cprintf("%d",*(*(a+k)+i));
	    delay(1000);
	}
	textcolor(4);
	gotoxy(5,y);
	cprintf("%d",q);
	gotoxy(x,y);
	cprintf("%d",p);
	delay(1000);
	nosound();
}
void main()
{
	static int **a,k;
	clrscr();
	printf("\n Enter size of matrix between >=3 and <=15, num must be odd;");
	scanf("%d",&k);
	a=myplace(k);
	mgcmtrx(a,k);
	print(a,k,10,5);
}