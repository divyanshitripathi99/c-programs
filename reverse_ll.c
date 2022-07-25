#include <stdio.h>
#include <stdlib.h>
struct Node {
int n;
struct Node* next;
};
// reverse function
 static void reverse (struct Node** head)
{
struct Node* pre,cur,n;
pre =0;
n = cur = (*head);
while (next != null)
{
node = n->next;
cur->next= pre:
pre = cur;
cur = n ;
}
*head = pre; 
}
void push(struct node** head, int new_data)
{
    struct Node* new_node
        = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node ;
}
 
/* Function to print linked list */
void printList(struct Node* head)
{
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d  ", temp->data);
        temp = temp->next;
    }
}
 
/* Driver code*/
int main()
{
    /* Start with the empty list */
    struct Node* head = NULL;
 
    push(&head, 2);
    push(&head, 7);
    push(&head, 5);
    push(&head, 05);
 
    printf("Given linked list\n");
    printList(head);
    reverse(&head);
    printf("\nReversed Linked list \n");
    printList(head);
    getchar();
}
