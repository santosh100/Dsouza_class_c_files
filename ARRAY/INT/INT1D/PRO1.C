#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include"boxa.c"
#include<process.h>

// ********************** ARMSTRONG NO *****************
void armstr()
{
	int a[3],b[3],i,l,s,j,k,x,p;
	clrscr();
	printf("\n Enter three no: ");
	for(i=0;i<3;i++)
	{
		scanf("%d",&a[i]);
		for(j=0,k=a[i];k>0;k/=10)
			j++;
		for(s=0,k=a[i];k>0;k/=10)
		{
			l=k%10;
			for(x=1,p=j;p>0;p--)
				x=x*l;
			s=s+x;
		}
		if(s==a[i])
			b[i]=1;
		else
			b[i]=0;
	}
	printf("\n 1 is Armstrong and 0 is not Armstrong \n");
	for(i=0;i<3;i++)
		printf("\n %d is %d ",a[i],b[i]);
	getch();
}

// ********************** PERFECT NO ******************
void perfect()
{
	int a[3],b[3],i,p,x;
	clrscr();
	printf("\n Enter three no: ");
	for(i=0;i<3;i++)
	{
		scanf("%d",&a[i]);
		for(x=0,p=1;p<=a[i]/2;p++)
		{
			if(a[i]%p==0)
				x=x+p;
		}
		if(x==a[i])
			b[i]=1;
		else
			b[i]=0;
	}
	printf("\n 1 is perfect no: \n 0 is not perfect no:\n");
	for(i=0;i<3;i++)
		printf("\n %d is %d ",a[i],b[i]);
	getch();
}

// *********************** SORT_LIN ****************************
void sortlin()
{
	int a[5],i,j,t;
	clrscr();
	printf("\n Enter five no: ");
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
	for(i=0;i<4;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]>a[j])              // we use > for Assending order
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	printf("\n Assending order: ");
	for(i=0;i<5;i++)
		printf("%5d",a[i]);
	printf("\n Decending order: ");
	for(i=4;i>=0;i--)
		printf("%5d",a[i]);
	getch();
}

//*************************** SORT_BUB *********************
void sortbub()
{
	int a[5],i,j,t;
	clrscr();
	printf("\n Enter five no: ");
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
	for(i=0;i<4;i++)
	{
		for(j=0;j<4-i;j++)
			{
				if(a[j]<a[j+1])       // we use < for dessending order
				{
					t=a[j];
					a[j]=a[j+1];
					a[j+1]=t;
				}
			}
	}
	printf("\n Dessending order: ");
	for(i=0;i<5;i++)
		printf("%5d",a[i]);
	printf("\n Assending order: ");
	for(i=4;i>=0;i--)
		printf("%5d",a[i]);
	getch();
}
// **************** ********** 1D ARRAY MAIN()****************************
void array1d()
{
	int ch;
	while(1)
	{
		clrscr();
		myboxa(1,1,80,24,YELLOW);
		dmyboxa(5,5,76,23,RED);
		myboxa(20,2,60,4,GREEN);
		gotoxy(36,3);
		textcolor(CYAN);
		cprintf(" SUB_MENU ");
		textcolor(YELLOW);
		gotoxy(20,6);
	cprintf(" 1. ARMSTRONG ");
	gotoxy(20,8);
	cprintf(" 2. PERFECT ");
	gotoxy(20,10);
	cprintf(" 3. LINEAR SORT ");
	gotoxy(20,12);
	cprintf(" 4. BUBLE SORT ");
	gotoxy(20,14);
	cprintf(" 5. GO TO MAIN MENU ");
	gotoxy(20,16);
	cprintf(" Enter your choice : ");
	scanf("%d",&ch);
	switch(ch)
	  {
		case 1:
			armstr();
			break;
		case 2:
			perfect();
			break;
		case 3:
			sortlin();
			break;
		case 4:
			sortbub();
			break;
		case 5:
			return;
		default:
			printf(" WRONG CHOICE ");
			break;

	  }
	}
}
// ************************** 2D ARRAY FUNCTIONS **********************
void add()
{
	int n[3][3],m[3][3],s[3][3];
	int i,j,x,y;
	clrscr();
	printf("\n Enter 2 matrix of  3*3 matrix:");
	for(y=3,i=0;i<3;i++,y+=2)
	{
	    for(x=5,j=0;j<3;j++,x+=5)
	    {
		gotoxy(x,y);
		scanf("%d",&n[i][j]);
	    }
	}
	for(y=3,i=0;i<3;i++,y+=2)
	{
	    for(x=30,j=0;j<3;j++,x+=5)
	    {
		gotoxy(x,y);
		scanf("%d",&m[i][j]);
	    }
	}
	printf("\n sum of two matrix");
	for(y+=4,i=0;i<3;i++,y+=2)
	{
	    for(x=15,j=0;j<3;j++,x+=5)
	    {
		s[i][j]=n[i][j]+m[i][j];
		gotoxy(x,y);
		printf("%d",s[i][j]);
	    }
	}
	getch();
}
// ********************** MULTIPLICATION **********************
void multi()
{
	int a[3][3],b[3][3],c[3][3];
	int i,j,k,x,y;
	clrscr();
	printf("\n Enter 2 matrix of 3*3");
	for(y=3,i=0;i<3;i++,y+=2)
	{
	    for(x=5,j=0;j<3;j++,x+=5)
	    {
		gotoxy(x,y);
		scanf("%d",&a[i][j]);
	    }
	}
	for(y=3,i=0;i<3;i++,y+=2)
	{
	    for(x=35,j=0;j<3;j++,x+=5)
	    {
		gotoxy(x,y);
		scanf("%d",&b[i][j]);
	    }
	}
	printf("\n Multiplication of two matrix");
	for(y+=4,i=0;i<3;i++,y+=2)
	{
	    for(x=20,k=0;k<3;k++,x+=5)
	    {
	       c[i][k]=0;
		for(j=0;j<3;j++)
		    c[i][k]+=a[i][j]*b[j][k];
		    gotoxy(x,y);
		    printf("%d",c[i][k]);
	    }
	}
	getch();
}
// *************** ************ TRANSPOSE **************************
void trans()
{
	int n[2][3],m[3][2];
	int i,j,x,y;
	clrscr();
	printf("\n Enter 3*2 matrix:");
	for(y=3,i=0;i<2;i++,y+=2)
	{
	    for(x=5,j=0;j<3;j++,x+=5)
	    {
		gotoxy(x,y);
		scanf("%d",&n[i][j]);
		m[j][i]=n[i][j];
	    }
	}
	for(y=3,i=0;i<3;i++,y+=2)
	{
	    for(x=40,j=0;j<2;j++,x+=5)
	    {
		gotoxy(x,y);
		printf("%d",m[i][j]);
	    }
	}
	getch();
}
// *************** *********** ROW TOTAL AND COL TOT **********************
void rtotctot()
{
	int n[4][6];
	int i,j,x,y;
	clrscr();
	printf("\n Enter 3*5 matrix:");
	for(y=3,i=0;i<3;i++,y+=2)
	{
		n[i][5]=0;
		for(x=5,j=0;j<5;j++,x+=5)
		{
			gotoxy(x,y);
			scanf("%d",&n[i][j]);
			n[i][5]+=n[i][j];
		}
			gotoxy(x,y);
			printf("%d",n[i][5]);
	}
	y+=2;
	for(x=5,j=0;j<6;j++,x+=5)
	{
		n[3][j]=0;
		for(i=0;i<3;i++)
			n[3][j]+=n[i][j];
			gotoxy(x,y);
			printf("%d",n[3][j]);
	}
	getch();
}
// **************** ********** 2D ARRAY main() ****************************
void array2d()
{
	int ch;
	while(1)
	{
	clrscr();
		myboxa(1,1,80,24,YELLOW);
		dmyboxa(5,5,76,23,RED);
		myboxa(20,2,60,4,GREEN);
		gotoxy(36,3);
		textcolor(CYAN);
		cprintf("SUB_MENU ");
		textcolor(YELLOW);
		gotoxy(20,6);
	cprintf(" 1. MATRIX ADDITION ");
	gotoxy(20,8);
	cprintf(" 2. MATRIX MULTIPLICATION ");
	gotoxy(20,10);
	cprintf(" 3. TRANSPOSE ");
	gotoxy(20,12);
	cprintf(" 4. ROW TOTAL AND COLUMN TOTAL ");
	gotoxy(20,14);
	cprintf(" 5. GO TO MAIN MENU ");
	gotoxy(20,16);
	cprintf(" Enter your choice : ");
	scanf("%d",&ch);
	switch(ch)
	  {
		case 1:
			add();
			break;
		case 2:
			multi();
			break;
		case 3:
			trans();
			break;
		case 4:
			rtotctot();
			break;
		case 5:
			return;
		default:
			printf(" WRONG CHOICE ");
			getch();
			break;

	  }
	}
}
// ********** ************ CHAR 1D FUNCTIONS *********** ********
void fndrpls()
{
	char n[20],f,r;
	int i=0;
	clrscr();
	printf("\n Enter a string: ");
	fflush(stdin);
	gets(n);
	printf("\n Enter character to find: ");
	fflush(stdin);
	f=getchar();
	printf("\n Enter character to replace: ");
	fflush(stdin);
	r=getchar();
	while(n[i]!='\0')
	{
		if(n[i]==f)
			n[i]=r;
	i++;
	}
	printf("\n Replaced string is: %s",n);
	getch();
}
// ************* ************ Lower 1D ****************************
void lower()
{
	char n[20];
	int i=0;
	clrscr();
	printf("\n Enter a string: ");
	fflush(stdin);
	gets(n);
	while(n[i]!='\0')
	{
		if(n[i]>=65&&n[i]<=90)
			n[i]+=32;
	i++;
	}
	printf("\n lowercase: %s",n);
	getch();
}
// ************ ************ Uppper 1D *****************************
void upper()
{
	char n[20];
	int i=0;
	clrscr();
	printf("\n Enter a string: ");
	fflush(stdin);
	gets(n);
	while(n[i]!='\0')
	{
		if(n[i]>=97&&n[i]<=122)
			n[i]-=32;
	i++;
	}
	printf("\n Uppercase: %s",n);
	getch();

}
// ********** ************ word reverse 1d ***********************
void reverse()
{
	char n[20];
	int i,j,p;
	clrscr();
	printf("\n Enter a string: ");
	fflush(stdin);
	gets(n);
	for(i=0,p=0;n[i]!='\0';i++)
	{
		if(n[i]==' '||n[i+1]=='\0')
		{
			for(j=i;j>=p;j--)
				printf("%c",n[j]);
			p=i;
		}
	}
	getch();
}
// **************** ********** 1D CHAR ARRAY main() ****************************
void arrayc1d()
{
	int ch;
	while(1)
	{
		clrscr();
		myboxa(1,1,80,24,YELLOW);
		dmyboxa(5,5,76,23,RED);
		myboxa(20,2,60,4,GREEN);
		gotoxy(36,3);
		textcolor(CYAN);
		cprintf(" SUB_MENU ");
		textcolor(YELLOW);
		gotoxy(20,6);
		cprintf(" 1. FIND REPLACE ");
		gotoxy(20,8);
		cprintf(" 2. Change into lowercase");
		gotoxy(20,10);
		cprintf(" 3. Change into uppercase");
		gotoxy(20,12);
		cprintf(" 4. Word reverse");
		gotoxy(20,14);
		cprintf(" 5. GO TO MAIN MENU ");
		gotoxy(20,16);
		cprintf(" Enter your choice : ");
	scanf("%d",&ch);
	switch(ch)
	  {
		case 1:
			fndrpls();
			break;
		case 2:
			lower();
			break;
		case 3:
			upper();
			break;
		case 4:
			reverse();
			break;
		case 5:
			return;
		default:
			printf(" WRONG CHOICE ");
			getch();
			break;

	  }
	}
}
// ************* ****** ***** MAIN ***** ****** ******************
void main()
{
		int ch;
	      while(1)
	      {
		clrscr();
		myboxa(1,1,80,24,YELLOW);
		dmyboxa(5,5,76,23,RED);
		myboxa(20,2,60,4,GREEN);
		gotoxy(37,3);
		textcolor(CYAN);
		cprintf(" MENU ");
		textcolor(YELLOW);
		gotoxy(20,6);
		cprintf("\n 1. 1D Integer Array ");
		gotoxy(20,8);
		cprintf("\n 2. 2D Integer Array ");
		gotoxy(20,10);
		cprintf("\n 3. 1D Character Array ");
		gotoxy(20,12);
		cprintf("\n 4. exit");
		textcolor(MAGENTA);
		gotoxy(20,20);
		cprintf("PLEASE ENTER YOUR CHOISE:    ");
		scanf("%d",&ch);
		switch(ch)
		{
		    case 1:
			array1d();
			break;
		    case 2:
			array2d();
			break;
		    case 3:
			arrayc1d();
			break;
		    case 4:
			exit(1);
		    default:
			printf(" WRONG CHOICE ");
			getch();
			break;
		}
	      }
}
