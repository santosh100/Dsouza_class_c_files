#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<dos.h>
#include<ctype.h>
#include<boxa.c>
#include<desin.c>
#include<process.h>
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
char fname[20];
int x=1,y=15;
int ch,j=0,n=10;
FILE *fp;
ctd p;
void list()
{
	rewind(fp);
	while((fread(&p,sizeof(p),1,fp))==1)
	{
	clrscr();
	dmyboxa(1,1,80,24,4); 		// 7 (RED)
	myboxa(30,2,55,4,11);		// 11 (LIGHTCYAN)
	myboxa(25,5,60,7,9);		// 9  (LIGHTBLUE)
	myboxa(28,8,57,10,12);          // 12 (LIGHTRED)
	    gotoxy(35,3);
	    printf(" CITYCODE: - %d",p.ctcode);
	    gotoxy(30,6);
	    printf("CITYNAME: - %s",p.ctname);
	    gotoxy(33,9);
	    printf("STATE -  %s",p.state);
	    textcolor(14);	// 14 YELLOW
	    gotoxy(12,11);
	    cprintf("PLACECODE    FROM              TO           DISTANCE IN KM");
	    gotoxy(12,12);
	    cprintf("==========================================================");
	    textcolor(9);	// 12 LIGHTBLUE
	    for(j=0,y=14;j<n;j++,y++)
	    {
		gotoxy(15,y);
		cprintf("%d",p.ct[j].code);
		gotoxy(22,y);
		cprintf("%s",p.ct[j].name1);
		gotoxy(38,y);
		cprintf("%s",p.ct[j].name2);
		gotoxy(65,y);
		cprintf("%d",p.ct[j].dis);
		delay(100);
		sound(y*200);
	    }
	    nosound();
	    getch();
	}
}
//***  **  **  ***  ***** MODIFY ***  ***  *****  *****   *****  ***
void modify()
{
	int q=0,cn,kk=0,t,flag=0,flag2=0;
	char ans;
     do
     {
	rewind(fp);
	flag=0;
	textcolor(GREEN);
	clrscr();
	printf("\n Enter city code to modify:  ");
	scanf("%d",&t);
	while((fread(&p,sizeof(p),1,fp))==1)
	{
	    if(p.ctcode==t)
	    {
		do
		{
		    clrscr();
		    gotoxy(5,5);
		    cprintf("Enter place code: ");
		    scanf("%d",&cn);
		    for(flag2=0,q=0,j=0;j<n;j++)
		    {
			if(p.ct[j].code==cn)
			{
			  while(1)
			  {
			    clrscr();
			    dmyboxa(5,5,76,23,RED);
			    textcolor(YELLOW);
			    delay(100);
			    gotoxy(15,7);
			    cprintf("PLEASE ENTER YOUR CHOICE TO MODIFY: ");
			    delay(100);
			    gotoxy(15,9);
			    cprintf(" 1. PLACE CODE");
			    delay(100);
			    gotoxy(15,11);
			    cprintf(" 2. PLACE1");
			    delay(100);
			    gotoxy(15,13);
			    cprintf(" 3. PLACE2");
			    delay(100);
			    gotoxy(15,15);
			    cprintf(" 4. DISTANCE");
			    delay(100);
			    gotoxy(15,17);
			    cprintf(" 5. BACK    ");
			    scanf("%d",&ch);
			    textcolor(GREEN);
			    switch(ch)
			    {
				case 1:
				    santosh:
				     if(pass())
				     {
					clrscr();
					gotoxy(5,5);
					cprintf("Enter new place code:   ");
					scanf("%d",&p.ct[j].code);
					kk=1;
				     }
				     else
				     {
					printf("\n\nINCORRECT PASSWORD");
					textcolor(BLINK+CYAN);
					cprintf("\n\nTRY AGAIN Y/N:");
					ans=getch();
					if(ans=='y'||ans=='Y')
					       goto santosh;
				     }
					break;
				case 2:
					gotoxy(15,19);
					cprintf("Enter new place1 name:   ");
					fflush(stdin);
					gets(p.ct[j].name1);
					kk=1;
					break;
				case 3:
					gotoxy(15,19);
					cprintf("Enter new place2 name:   ");
					fflush(stdin);
					gets(p.ct[j].name2);
					kk=1;
					break;
				case 4:
					gotoxy(15,19);
					cprintf("Enter new distance:   ");
					scanf("%d",&p.ct[j].dis);
					kk=1;
					break;
				case 5:
					q=1;
					break;
			    }
			    flag2=1;
			    if(q==1)
				break;
			  }
			}
		    }
		    if(flag2==0)
		    {
			printf("\nUNAVAILABLE RECORD");
			textcolor(BLINK+CYAN);
			cprintf("\n\nTRY WITH ANOTHER PLACE CODE PRESS Y/N:");
		    }
		    else
			{
			clrscr();
			gotoxy(15,9);
			cprintf("MODIFY ANOTHER RECORD PRESS Y/N:");
			}
			fflush(stdin);
			ans=getch();
		}while(ans=='y'||ans=='Y');
		  if(kk==1)
		  {
		  //	  fseek(fp,-sizeof(p),1);
			fseek(fp,-482L,1);
			fwrite(&p,sizeof(p),1,fp);
			gotoxy(15,11);
			cprintf("SUCCESSFULLY MODIFIED");
		  }
		  else
		  {
			gotoxy(20,11);
			cprintf("NO CHANGE");
		  }
			delay(1000);
	    flag=1;
	    }
	}
	  if(flag==0)
	  {
		printf("\n\nTHIS RECORD DOES NOT EXISTS");
		textcolor(BLINK+CYAN);
		cprintf("\n\nTRY WITH ANOTHER CITY CODE PRESS Y/N:");
	  }
	  else
	  {
		gotoxy(15,13);
		cprintf("MODIFY ANOTHER CITY DETAIL PRESS Y/N:");
	  }
	   fflush(stdin);
	   ans=getch();
     }while(ans=='y'||ans=='Y');
}
//******************* ***** DELETE ***** ****************************
void del()
{
	char ans;
     aa:
	if(pass())
	{
	    int flag=0;
	    FILE *fp2;
	    fp2=fopen("rough","wb");
	    rewind(fp);
	    printf("\n\nENTER CITYCODE TO DELETE:  ");
	    scanf("%d",&ch);
	    while((fread(&p,sizeof(p),1,fp))==1)     // ==1 can be neglected
	    {
		if(p.ctcode!=ch)
		{
		    fwrite(&p,sizeof(p),1,fp2);
		}
		else
		    flag=1;
	    }
	    if(flag==1)
	    {
		fclose(fp);
		fclose(fp2);
		remove(fname);
		rename("rough",fname);
		printf("\n\nDELETED SUCCESSFULLY ");
		printf("\n\nWANT TO REMOVE ANOTHER RECORD PRESS Y/N:");
		fp=fopen(fname,"rb+");
	    }
	    else
	    {
		printf("\n\nTHIS RECORD DOES NOT EXISTS");
		textcolor(BLINK+YELLOW);
		cprintf("\n TRY WITH ANOTHER CITYCODE PRESS Y/N:");
	    }
	}
	else
	{
		printf("\n INCORRECT PASSWORD ");
		textcolor(BLINK+YELLOW);
		cprintf("\n\nTRY AGAIN PRESS Y / N:");
	}
	fflush(stdin);
	ans=getch();
	if(ans=='y'||ans=='Y')
	{
	   //	del();
		goto aa;
	}
}
//**************** **** PASSWORD **** ***************************
int pass()
{
	char str[80];
	int i=0;
	clrscr();
	textcolor(RED);
	gotoxy(5,2);
	cprintf("Enter password:    ");
	while(1)
	{
		str[i]=getch();
		if(str[i]!=13)
		{
		    cprintf("*");
		}
		else
		    break;
		i++;
	}
	str[i]='\0';
	if(strcmp(str,"santosh")==0)
		return(1);
	else
		return(0);
}
//************** ****** ***** COUNT **** **** ********************
void count()
{
	long int tot=0;
	ch=0;
	clrscr();
	fseek(fp,0,SEEK_END);
	tot=ftell(fp);
	ch=tot/sizeof(p);
      //	ch=tot/482;
	dmyboxa(1,1,80,24,RED);
	myboxa(20,7,60,9,GREEN);
	textcolor(CYAN);
	gotoxy(28,8);
	cprintf("NUMBER OF RECORDS:    %d",ch);
	delay(3000);
}
// *********** *********** ******** ADD ********* **** *************
void add()
{
	char ans;
	fseek(fp,0,2);
	do
	{
	clrscr();
	printf("\nCODE\tCTNAME\t\tSTATE\t\t\t MYCITY \t    DISTANCE KM");
	printf("\n===============================================================================");
		y=5;
	    gotoxy(1,y);
	    scanf("%d",&p.ctcode);
	    gotoxy(10,y);
	    fflush(stdin);
	    gets(p.ctname);
	    gotoxy(25,y);
	    fflush(stdin);
	    gets(p.state);
	    for(y=7,j=0;j<n;j++,y++)
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
	    printf("\n\n\nWANT TO ADD MORE RECORDS PRESS 'Y' FOR YES 'N' FOR NO   ");
	    ans=getch();
	}while(ans=='y'||ans=='Y');
}
// ************* ****** ***** EXIT ***** ****** ******************
void myexit()
{
	clrscr();
	mydesin(4,14);
	textcolor(BLACK);
	delay(1000);
	gotoxy(38,10);
	cprintf("THANK");
	gotoxy(39,12);
	cprintf("YOU");
	delay(2000);
	gotoxy(26,15);
	cprintf("DEVELOPED BY :-  SANTOSH SAHU");
	getch();
	exit(3);
}
// ************* ****** ***** MAIN ***** ****** ******************
void main()
{
	char title[20],ans;
	textcolor(YELLOW);
	textbackground(BLUE);
	clrscr();
	gotoxy(5,2);
	cprintf("Enter file name to open:   ");
	gets(fname);
	fp=fopen(fname,"rb+");
	clrscr();
	if(fp==NULL)
	{
		gotoxy(17,7);
		cprintf("FILE NOT FOUND WANT TO CREATE NEW FILE PRESS Y/N    ");
		fflush(stdin);
		ans=getch();
		if(ans=='y'||ans=='Y')
		    fp=fopen(fname,"wb");
		else
		    exit(1);
	}
	if(fp==NULL)
	{
		gotoxy(25,15);
		cprintf(" SORRY THIS FILE CANNOT BE OPENED ");
		delay(3000);
		exit(2);
	}
	ss:

	    clrscr();
	    if(pass())
	    {
	    textcolor(BLINK+YELLOW);
		gotoxy(25,9);
		cprintf("FILE HAS BEEN OPENED SUCCESSFULLY");
		delay(3000);
	     for(j=0;fname[j]!='\0';j++)
		title[j]=toupper(fname[j]);
		title[j]='\0';
		mydesin(2,14);
		textcolor(RED);
		gotoxy(36,11);
		cprintf("WELCOME");
		delay(1000);
		gotoxy(39,13);
		cprintf("TO");
		delay(1000);
		gotoxy(34,15);
		cprintf("%s DETAIL",title);
		delay(2000);

	      while(1)
	      {
		textbackground(BLACK);
		clrscr();
		myboxa(1,1,80,24,YELLOW);
		dmyboxa(5,5,76,23,RED);
		myboxa(20,2,60,4,GREEN);
		gotoxy(35,3);
		textcolor(CYAN);
		cprintf(" CITY DETAILS ");
		textcolor(YELLOW);
		gotoxy(20,6);
		cprintf("\n 1. List");
		gotoxy(20,8);
		cprintf("\n 2. Modify");
		gotoxy(20,10);
		cprintf("\n 3. Delete");
		gotoxy(20,12);
		cprintf("\n 4. Count");
		gotoxy(20,14);
		cprintf("\n 5. Add");
		gotoxy(20,16);
		cprintf("\n 6. exit");
		textcolor(MAGENTA);
		gotoxy(20,20);
		cprintf("PLEASE ENTER YOUR CHOISE:    ");
		scanf("%d",&ch);
		switch(ch)
		{
		    case 1:
			list();
			break;
		    case 2:
			modify();
			break;
		    case 3:
			del();
			break;
		    case 4:
			count();
			break;
		    case 5:
			add();
			break;
		    case 6:
			fclose(fp);
			myexit();
		}
	      }
	    }
	    else
	    {
		gotoxy(25,7);
		cprintf("INCORRECT PASSWORD");
		gotoxy(25,9);
		cprintf("TRY AGAIN PRESS Y/N:");
		fflush(stdin);
		ans=getch();
		if(ans=='y'||ans=='Y')
		goto ss;
	    }
}
