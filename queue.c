#include <stdio.h>
#include <stdlib.h>
#define max 5
// functions
void display();
void insert();
void delete();
int queue[max];
int f=-1, r=-1;

void insert()
{ 
 int n,i,b;
 //printf("\n Enter the item =");
 //scanf("%d",&n);
	if (r == max-1)
	 {
	  printf("\n Queue is full no item can be inserted");
	  exit(0);
	 }
	 else
	 { 
	 printf("How many item wants to be inserted :");
	 scanf("%d",&b);
	 for(i = 1; i <= b ; i++)
	 {
	 printf("\n Enter the %d item =",i);
         scanf("%d",&n);
	 f = 0;
	 r = r+1;
	 queue[r] = n;
	 printf("\n The value of Rear is = %d \n",r);
	 } 
	 }
}

void delete()
{	  int a=-1,i,b;
	if (f ==r)
	 {
	  printf("\n Queue is empty no item can be deleted");
	  exit(0);
	 }
	 else
	 { 
	 printf("How many item wants to be deleted :");
	 scanf("%d",&b);
	 for(i = 0; i < b ; i++) 
	 {
	  f = f+1;
	  a = queue[f];
	 printf("\n The value of Front is = %d \n",f); 
	 }
	 }
}


void display()
{
int i;
printf("###############################################");

    if (f == - 1)
	{
        printf("Queue is empty \n");
	exit(0);
	}
    else

    {

        printf("\n Queue is : \n");

        for (i = f; i <= r; i++)

            printf("%d ", queue[i]);
            printf("\n FRONT = %d ",f);
            printf("\n REAR = %d ",r);

        printf("\n");

    }
 }
    
    //main function 
    
  int main()
    {
            int ch;
            
        while(1)
    	{
    	printf("1.Insert element to queue \n");

        printf("2.Delete element from queue \n");

        printf("3.Display all elements of queue \n");

        printf("4.Quit \n");

        printf("Enter your choice : ");
        
	scanf("%d",&ch);
    	        switch (ch)

        {

            case 1:

            insert();

            break;

            case 2:

            delete();

            break;

            case 3:

            display();

            break;

            case 4:

            exit(1);

            default:

            printf("Wrong choice \n");

        } /* End of switch */

    } /* End of while */
}
    	

