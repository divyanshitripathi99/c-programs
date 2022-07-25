#include<stdio.h>
 void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
        }
        printf("\n");
        }
void swap(int arr[] , int n)
 { int temp,i;
   temp = arr[1];
   arr[1] = arr[n-2];
   arr[n-2] = temp ;
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
        }
        printf("\n");
        }
   
   int main()
{
    int arr[] = { 1,2,3,4,5,6,7};
    printArray(arr, 7);
    swap(arr, 7);
    return 0;
}
