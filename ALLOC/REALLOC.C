#include<stdio.h>
#include<conio.h>
#include<alloc.h>
#include<string.h>
void main()
    {
	char *a,n;
	clrscr();
	printf("\n Enter how many elements : ");
	fflush(stdin);
	scanf("%d",&n);
	a=(char *)calloc(n,sizeof(char));
	strcpy(a,"hello");

	printf("\n a=%p a=%s",a,a);

	a=(char *)realloc(a,(n*2));        // realloc reallocates main memory
	strcat(a,"ram");
	printf("\n a=%p a=%s",a,a);
	    getch();
    }