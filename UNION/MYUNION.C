			/* the compiler allocates a piece of storage
			   that is large enough to hold the largest variable type in the union.
			   means when we use union the compiler allocates it's largest variable's storage(size).
			   Union can handle only one member at a time. */
#include<stdio.h>
#include<conio.h>
union abc
    {                          /* In this example the output will be garbage value because it can handle only
			       one variable at a time and we are scanning here more variables without any condition. */
			       //Hint watch next example
	int empno;
	char name[20];
	int basic;
    }ob;

    void main()
	{
	clrscr();
	scanf("%d",&ob.empno);
	fflush(stdin);
	gets(ob.name);scanf("%d",&ob.basic);
	printf("\n empno=%d",ob.empno);
	printf("\n name = %s",ob.name);
	printf("\n basic=%d",ob.basic);
	getch();
	}
