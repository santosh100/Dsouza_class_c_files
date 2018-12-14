#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i,ser;
	char ans;
	clrscr();
	printf("\n Enter five no:");
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
	do
	{
		printf("\n Enter no to search: ");
		scanf("%d",&ser);
		for(i=0;i<5;i++)
		{
			if(ser==a[i])
			{
				printf("\n %d found",ser);
				break;
			}
		}
		if(i==5)
			printf("\n %d not found",ser);
		printf("\n Want to continue press y/n : ");
		fflush(stdin);
	   //	scanf("%c",&ans);
		ans=getchar();
	   //	ans=getche();
	  //	ans=getch();
	}while(ans=='y'||ans=='Y');
}