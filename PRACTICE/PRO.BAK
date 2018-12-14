#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<dos.h>
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
	struct mycity ct[2];
};
typedef struct ctdetail ctd;
char fname[20];
int x=1,y=5;
int ch,j,n=2;
FILE *fp;
ctd p;
void list()
{
	rewind(fp);
	clrscr();
	printf("\nCODE\tCTNAME\t\tSTATE\t\t\t MYCITY \t    DISTANCE KM");
	printf("\n===============================================================================");
	while((fread(&p,sizeof(p),1,fp))==1)
	{
		y=5;
	    clrscr();
	    gotoxy(1,y);
	    printf("%d",p.ctcode);
	    gotoxy(10,y);
	    printf("%s",p.ctname);
	    gotoxy(25,y);
	    printf("%s",p.state);
	    for(j=0,y=5;j<n;j++,y++)
	    {
		gotoxy(30,y);
		printf("%d",p.ct[j].code);
		gotoxy(35,y);
		printf("%s",p.ct[j].name1);
		gotoxy(55,y);
		printf("%s",p.ct[j].name2);
		gotoxy(75,y);
		printf("%d",p.ct[j].dis);
	    }
	    getch();
	}
}
//***  **  **  ***  ***** MODIFY ***  ***  *****  *****   *****  ***
void modify()
{
	int q=0,cn,kk=0,t,flag=0,flag2=0;
	rewind(fp);
	printf("\n Enter city code to modify:  ");
	scanf("%d",&t);
	while((fread(&p,sizeof(p),1,fp))==1)
	{
	    if(p.ctcode==t)
	    {
		while(1)
		{
		    printf("\n Enter place code: ");
		    scanf("%d",&cn);
		    for(j=0;j<n;j++)
		    {
			if(p.ct[j].code==cn)
			{
			  while(1)
			  {
			    printf("\n PLEASE ENTER YOUR CHOICE TO MODIFY: ");
			    printf("\n 1. PLACE CODE");
			    printf("\n 2. PLACE1");
			    printf("\n 3. PLACE2");
			    printf("\n 4. DISTANCE");
			    printf("\n 5. BACK");
			    scanf("%d",&ch);
			    switch(ch)
			    {
				case 1:
					printf("\n Enter place code:   ");
					scanf("%d",&p.ct[j].code);
					kk=1;
					break;
				case 2:
					printf("\n Enter place1:   ");
					scanf("%s",p.ct[j].name1);
					kk=1;
					break;
				case 3:
					printf("\n Enter place2:   ");
					scanf("%s",p.ct[j].name2);
					kk=1;
					break;
				case 4:
					printf("\n distance:   ");
					scanf("%d",&p.ct[j].dis);
					kk=1;
					break;
				case 5:
					if(kk==1)
					{
				       //	  fseek(fp,-sizeof(p),1);
					  fseek(fp,-130L,1);
					  fwrite(&p,sizeof(p),1,fp);
					  printf("\n successfully modified");
					  getch();
					}
					else
					{
					  printf("\n no change");
					  getch();
					}
					q=1;
					break;
			    }
			    flag=1;
			    if(q==1)
				break;
			  }
			}
			flag2=1;
		    }
		    if(flag2==0)
		    {
			printf("\n this record does not exist");
			getch();
		    }
		    if(q==1)
		    return;
		}
	    }
	}
	if(flag==0)
			 printf("\n\n THIS RECORD DOES NOT EXISTS");
			 getch();
}
//******************* ***** DELETE ***** ****************************
void del()
{
	char ans;
	if(pass())
	{
	    int flag=0;
	    FILE *fp2;
	    fp2=fopen("rough","wb");
	    rewind(fp);
	    printf("\n ENTER CITYCODE TO DELETE:  ");
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
		printf("\n DELETED SUCCESSFULLY ");
		fp=fopen(fname,"rb+");
	    }
	    else
		printf("\n THIS RECORD DOES NOT EXISTS ");
	}
	else
	{
		printf("\n INCORRECT PASSWORD ");
	     //	textcolor(BLINK+CYAN);
		cprintf("\n\n      TRY AGAIN PRESS Y / N:   ");
		fflush(stdin);
		ans=getch();
		if(ans=='y'||ans=='Y')
		    del();
	}
		getch();
}
//**************** **** PASSWORD **** ***************************
int pass()
{
	char str[80];
	int i=0;
	printf("\n Enter password:    ");
	while(1)
	{
		str[i]=getch();
		if(i!=7)
		{
		    printf("*");
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
	fseek(fp,0,SEEK_END);
	tot=ftell(fp);
	ch=tot/sizeof(p);
      //	ch=tot/86;
	printf("\n THERE ARE %d RECORDS ONLY",ch);
	getch();
}
// *********** *********** ******** ADD ********* **** *************
void add()
{
	char ans;
	fseek(fp,0,2);
	clrscr();
	printf("\nCODE\tCTNAME\t\tSTATE\t\t\t MYCITY \t    DISTANCE KM");
	printf("\n===============================================================================");
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
	    for(j=0;j<n;j++,y++)
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
// ************* ****** ***** MAIN ***** ****** ******************
void main()
{

	clrscr();
	printf("\n Enter file name to open:   ");
	gets(fname);
	fp=fopen(fname,"rb+");
	if(fp==NULL)
	{
		fp=fopen(fname,"wb");
	}
	if(fp==NULL)
	{
		printf("\n THIS FILE CANNOT BE OPENED ");
		exit(2);
	}
	while(1)
	{
		clrscr();
		printf("\n 1. List");
		printf("\n 2. Modify");
		printf("\n 3. Delete");
		printf("\n 4. Count");
		printf("\n 5. Add");
		printf("\n 6. exit   ");
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
			exit(1);
		}
	}
}
