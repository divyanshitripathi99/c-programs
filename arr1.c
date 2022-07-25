#include<stdio.h>
 void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++){
        printf("%d ", arr[i]);}
        printf("\n");
}
void dublicate(int arr[],int n)
{int i,j; 
for (i=0; i < n;i++)
	{for (j=i+1; j < n;j++)
	{
	 if (arr[i] == arr[j])
	  { int count=0;
	  count = count++;
	   printf("count =%d",count);
	  printf(" %d\n",arr[j]);
	  }
	  }
	  }
	  }
int main()
{
    int arr[] = { 2, 7, 8, 2, 5, 5, 7 };
    printArray(arr, 7);
    dublicate(arr, 7);
    return 0;
}
