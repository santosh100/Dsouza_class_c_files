#include<stdio.h>
#include<conio.h>
#include<ctype.h>
struct mycity
{
	int code;
	char name1[20],name2[20];
	int dis;
};
struct ctdetail
{
	int ctcode;
	char ctname[20];
	char state[20];
	struct mycity ct[10];
};
typedef struct ctdetail ctd;

FILE *fp;

void main()
{
	ctd p;
	char ans;
	int j;
	clrscr();
	fp=fopen("distance","ab");
	fseek(fp,0,2);
    do{
	int y=5;
	clrscr();
	printf("\nCODE\tCTNAME\t\tSTATE\t\t\t MYCITY \t    DISTANCE KM");
	printf("\n===============================================================================");

	    gotoxy(1,y);
	    scanf("%d",&p.ctcode);
	    gotoxy(10,y);
	    fflush(stdin);
	    gets(p.ctname);
	    gotoxy(25,y);
	    fflush(stdin);
	    gets(p.state);
	    for(j=0;j<10;j++,y++)
	    {
		gotoxy(30,y);
		scanf("%d",&p.ct[j].code);
		gotoxy(35,y);
		fflush(stdin);
		gets(p.ct[j].name1);
		gotoxy(55,y);
		fflush(stdin);
		gets(p.ct[j].name2);
		gotoxy(75,y);
		scanf("%d",&p.ct[j].dis);
	    }
	    fwrite(&p,sizeof(p),1,fp);
	    printf("\n want to continue press y/n   ");
	    ans=getch();
    }while((toupper(ans))=='Y');
	fclose(fp);
}
