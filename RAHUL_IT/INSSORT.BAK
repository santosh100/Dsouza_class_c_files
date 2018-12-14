#include<stdio.h>
#include<conio.h>
void insertionSort(int *arr, int n)
{
  int i, key, j;
  for (i = 1; i < n; i++)
  {
	key = arr[i];
	j = i-1;

	while (j >= 0 && arr[j] > key)
	{
		arr[j+1] = arr[j];
		j = j-1;
	}
	arr[j+1] = key;
   }
}

void main()
{
	int a[5],i;
	clrscr();
	printf("\n Enter five numbers: ");
	for(i=0;i<5;i++)
	    scanf("%d",&a[i]);
	insertionSort(a,5);    // calling insertion sort function
	printf("\n After insertion sort: ");
	for(i=0;i<5;i++)
	    printf("%5d",a[i]);
	getch();
}