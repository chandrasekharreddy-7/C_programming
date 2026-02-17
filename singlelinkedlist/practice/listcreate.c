#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *create()
{
    struct node *head = NULL,*temp = NULL,*newnode = NULL;
    int choice = 1;
    while(choice == 1)
    {
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("enter the data :");
    scanf("%d",&newnode->data);
    newnode -> next = NULL;
    if(head == NULL)
    {
        head = newnode;
        temp = head;
    }
    else
    {
        temp->next = newnode;
        temp = newnode;
    }
    printf("enter 1 to continue and 0 to stop :");
    scanf("%d",&choice);
    }
    return head;
}
struct node *display(struct node *head)
{
    struct node *x = head;
    int count = 0;
    if (head == NULL)
    {
        printf("List is empty!.");
    }
    else
    {
        printf("the elements in the list are :\n");
        while(x != NULL)
        {
        printf("%d -> ",x->data);
        x = x->next;
        count++;
        }
        printf("NULL\n");
        printf("Total number of nodes = %d\n",count);
    }
    return head;
}
// struct node *insertionatlast(struct node *head)
// {
//     struct node *temp = NULL,*newnode = NULL;
//     newnode = (struct node*)malloc(sizeof(struct node));
//     printf("enter data to add at last :");
//     scanf("%d",&newnode->data);
//     newnode -> next = NULL;
//     temp = head;
//     if (head == NULL)
//     {
//         return newnode;
//     }
//     else
//     {
//         while(temp->next != NULL)
//         {
//             temp = temp->next;
//         }
//         temp->next = newnode;
//     }
//     return head;
// }
// struct node *insertionatfirst(struct node *head)
// {
//     struct node *newnode;
//     newnode = (struct node*)malloc(sizeof(struct node));
//     printf("enter the data to insert at first :");
//     scanf("%d",&newnode->data);
//     newnode->next = head;
//     head = newnode;
//     return head;
// }
// struct node *insertion(struct node *head,int pos)
// {
//     struct node *newnode,*temp;
//     int i;
//     newnode = (struct node *)malloc(sizeof(struct node));
//     printf("enter data to insert :");
//     scanf("%d",&newnode->data);
//     newnode->next = NULL;
//     if (pos == 1)
//     {
//         newnode -> next = head;
//         head = newnode;
//         return head;
//     }
//     temp = head;
//     for(i = 1;i < pos-1 && temp != NULL;i++)
//     {
//         temp = temp->next;
//     }
//     if (temp == NULL)
//     {
//         printf("Invalid position!\n");
//         return head;
//     }
//     newnode -> next = temp->next;
//     temp->next = newnode;
//     return head;
// }

int main()
{
    struct node *head = NULL;
    int pos;
    head = create();
    display(head);
    printf("enter position to insert :");
    scanf("%d",&pos);
    head = insertion(head, pos);
    display(head);
    return 0;
}
