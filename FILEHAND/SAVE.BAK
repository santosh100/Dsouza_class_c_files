			// sorry this program doesn't work

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<alloc.h>
#include<process.h>
struct emp
{
	int empno;
	char name[20];
	int salary;
	struct emp *next;
};
typedef struct emp node;
node *head,*tail;
FILE *fp;
char fname[10];
void input(node *p)
{
	printf("\n empno		name	      salary:  ");
	scanf("%d",&p->empno);
	fflush(stdin);
	gets(p->name);
	scanf("%d",&p->salary);
	p->next=NULL;
}
void myadd()
{
	node *t;
    //	t=new node;
	t=(node*)malloc(sizeof(node)); // in 'c'
    //	t=(node*)malloc(sizeof(node));
	input(t);
	if(head==NULL)
	    head=t;
	else
	    tail->next=t;
	tail=t;
}
void print(node *p)
{
	printf("\n EMPLOYEE NO:  %d",p->empno);
	printf("\n NAME:         %s",p->name);
	printf("\n SALARY:       %d",p->salary);
	printf("\n***********************************");
	getch();
}
void mylist()
{
	node *t;
	clrscr();
	if(head==NULL)
	{
		printf("\n Queue is empty");
		getch();
		return;
	}
	t=head;
	while(t!=NULL)
	{
	    print(t);
	    t=t->next;
	}
}
void mydel()
{
	node *t;
	if(head==NULL)
	{
		printf("\n Queue is empty");
		getch();
		return;
	}
	t=head->next;
     //	delete head;
	free(head); //in 'c'
	head=t;
	printf("\n ONE ELEMENT DELETED");
	getch();
}
void save()
{
	node *p;
	printf("\n Enter file name to save: ");
	fflush(stdin);
	gets(fname);
	fp=fopen(fname,"wb");
	for(p=head;p!=NULL;p=p->next)
	{
	    fwrite(&p,sizeof(p),0,fp);
	}
	fclose(fp);
}
void read()
{
	node *t,*p;
	printf("\n Enter file name to open: ");
	fflush(stdin);
	gets(fname);
	fp=fopen(fname,"rb");
	if(fp==NULL)
	{
	    printf("\n file not found");
	    fclose(fp);
	    return;
	}
	while((fread(&p,sizeof(p),1,fp)))
	{
	  //  t=new node;
	  t=(node*)malloc(sizeof(node)); // in 'c'
	    t->empno=p->empno;
	    strcpy(t->name,p->name);
	    t->salary=p->salary;
	    if(head==NULL)
		head=t;
	    else
		t->next=tail;
	    tail=t;
	}
}
void main()
{
	int ch;
	head=NULL;
	while(1)
	{
		clrscr();
	    printf("\n 1.ADD");
	    printf("\n 2.LIST");
	    printf("\n 3.DELETE");
	    printf("\n 4.SAVE");
	    printf("\n 5.READ");
	    printf("\n 6.EXIT");
	    printf("\n\n ENTER CHOICE:     ");
	    scanf("%d",&ch);
	    switch(ch)
	    {
		case 1:
			myadd();
			break;
		case 2:
			mylist();
			break;
		case 3:
			mydel();
			break;
		case 4:
			save();
			break;
		case 5:
			read();
			break;
		case 6:
			exit(1);
	    }
	}
}
