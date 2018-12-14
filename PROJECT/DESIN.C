#include<math.h>
#include<dos.h>
void mydesin(int c1,int c2)
{
	int i,j,m,n,t=6,x=15,y=3;
	textbackground(c1);
	clrscr();
	textcolor(c2);
	for(i=1-t;i<t;i++)
	{
	    m=t-abs(i);
	    for(n=1,j=1-t;j<t;j++,x+=5)
	    {
		if(n>(t-m)+1)
		{
		    gotoxy(x,y);
		    cprintf(" ");
		}
		else
		{
		    gotoxy(x,y);
		    cprintf("*");
		}
		if(j>=0)
		    n--;
		else
		    n++;
	    }
	    x=15,y+=2;
	}
}
