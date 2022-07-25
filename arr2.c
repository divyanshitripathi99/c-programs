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
void sum(int arr1[], int arr2[] ,int n)
{int i; 
for ( i =0; i < n; i++)
{ for (int j=0; j < n;j++){
	int c = arr1[i] + arr2[j];
	if( c == 50)
	 { printf("\n %d + %d = 50",arr1[i],arr2[j]);
	 }
	}
	}
	}
int main()
{
    int arr1[] = { 25, 10, 35, 2, 25, 20, 7 };
    int arr2[] = { 20, 70, 25, 15, 40, 30, 7 };
    printArray(arr1, 7);
     printArray(arr2, 7);
     sum(arr1, arr2 ,7);
    return 0;
}
