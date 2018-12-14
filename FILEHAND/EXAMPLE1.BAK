#include<stdio.h>
#include<conio.h>
void main()
{
	char a;
	FILE *fp;
	clrscr();
	fp= fopen("santosh.txt","w");		// w write mode
						// a appened mode
	printf("\n Enter data to save press f6 or ctrl+z: ");
	while((a=getchar())!=EOF)
		putc(a,fp);
	fclose(fp);
	fp=fopen("santosh.txt","r");	// r read mode
	printf("\n  contents of santosh.txt \n ");
	while((a=getc(fp))!=EOF)
	      //	putchar(a); // or
	      printf("%c",a);
	fclose(fp);
}