#include<stdio.h>
#include<conio.h>
void main()
{
	char a;
	char fname[10];
	FILE *fp;
	int bulb=0;
	clrscr();
	printf("\n Enter file name: ");
	scanf("%s",fname);
	fp=fopen(fname,"r+");        // r+ for read or write
	if(fp==NULL)
	{
		fp=fopen(fname,"w");
		bulb=1;
	}
	if(fp==NULL)
	{
		printf("\n this file cannot be opened %s",fname);
		return;
	}
	if(bulb==0)
		fseek(fp,0L,SEEK_END);   // 0 beginning of file SEEK_SET
					 // 1 current position SEEK_CUR
					 // 2 will take fp to eof 0 byte----SEEK_END
		printf("\n Enter some data: ");
	while((a=getchar())!=EOF)
		putc(a,fp);		// to write in the file

	if(bulb==0)                     // fseek(fp,0L,0); will go to the begin of file
					// or
	rewind(fp);
	if(bulb==1)
	{
		fclose(fp);
		fp=fopen(fname,"r");
	}
	printf("\n the contents of %s file is: ",fname);
		while((a=getc(fp))!=EOF)	//to read from the file

	//	printf("%c",a);
		putchar(a);			//will print on the screen
		fclose(fp);
}