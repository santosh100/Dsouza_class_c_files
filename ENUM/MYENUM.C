#include<stdio.h>
#include<conio.h>
enum ss
    {
    Sunday=1,     // We can provide any no here for example 101
    Monday,
    Tuesday,
    };
    void main()
	{
	    int ch;
	    while(1)
		{
		   printf("\n 1. Sunday");
		   printf("\n 2. Monday");
		   printf("\n 3. Tuesday");
		   printf("\n 4. Exit");
		   printf("\n Enter choice: ");
		   scanf("%d",&ch);
		   switch(ch)
		       {
			   case Sunday :
				printf("\n today is sunday: ");
				break;
			   case Monday :
				printf("\n Monday is better then ");
				break;
			   case Tuesday :
				printf("\n today is more better ");
				break;
			   case 4:
				exit();

		       }
		}
	}