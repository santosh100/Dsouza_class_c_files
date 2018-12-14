#include<stdio.h>
#include<conio.h>
struct student_detail
{
	int id;
	char name[20];
	char sex[10];
	char cat[10];
	char course[10];
};
int y=4;
void main()
{
	FILE *fp;
	char ans;
	struct student_detail p;
	clrscr();
	fp=fopen("student","wb");
	do
	{
		clrscr();
		printf("\nID\tSTUDENT NAME\t    SEX\t    CATEGORY    COURSE");
		printf("\n========================================================");
		gotoxy(1,5);
		scanf("%d",&p.id);
		gotoxy(10,5);
		fflush(stdin);
		gets(p.name);
		gotoxy(30,5);
		fflush(stdin);
		gets(p.sex);
		gotoxy(40,5);
		fflush(stdin);
		gets(p.cat);
		gotoxy(50,5);
		fflush(stdin);
		gets(p.course);
		fwrite(&p,sizeof(p),1,fp);
		gotoxy(30,15);
		printf("\n WANT TO ADD ANOTHER RECORD ? \n PRESS Y TO ADD ,N FOR NO:  ");
		ans=getch();
	}while(ans=='y'||ans=='Y');
	fclose(fp);
	fp=fopen("student","rb+");
	clrscr();
	printf("\nID\tSTUDENT NAME\t    SEX\t    CATEGORY    COURSE");
	printf("\n========================================================");
	while((fread(&p,sizeof(p),1,fp))==1)
	{

		delay(100);
		gotoxy(1,y);
		printf("%d",p.id);
		delay(100);
		gotoxy(10,y);
		puts(p.name);
		delay(100);
		gotoxy(30,y);
		puts(p.sex);
		delay(100);
		gotoxy(40,y);
		puts(p.cat);
		delay(100);
		gotoxy(50,y);
		puts(p.course);
	  y++;
	}
	getch();
	fclose(fp);
}