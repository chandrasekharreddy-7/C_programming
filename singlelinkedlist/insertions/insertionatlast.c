// #include <stdio.h>
// #include <stdlib.h>
// struct node
// {
//     int data;
//     struct node *next;
// };
// struct node *create()
// {
//     struct node *head = NULL,*temp = NULL,*newnode = NULL;
//     int choice = 1;
//     while(choice == 1)
//     {
//         newnode = (struct node*)malloc(sizeof(struct node));
//         printf("enter data :");
//         scanf("%d",&newnode->data);
//         newnode -> next = NULL;
//         if(head == NULL)
//         {
//             head = newnode;
//             temp = head;
//         }
//         else
//         {
//             temp->next = newnode;
//             temp = newnode;
//         }
//         printf("enter 1 to continue and 0 to exit :");
//         scanf("%d",&choice);
//     }
//     return head;
// }
// struct node *display(struct node *head)
// {
//     struct node *temp = NULL;
//     temp = head;
//     if(head == NULL)
//     {
//         printf("list is empty!.");
//         return head;
//     }
//     else
//     {
//         while(temp != NULL)
//         {
//             printf("%d -> ",temp->data);
//             temp = temp -> next;
//         }
//         printf("NULL\n");
//     }
//     return head;
// }
// struct node* insertionatlast(struct node *head)
// {
//     struct node *newnode, *temp = head;

//     newnode = (struct node*)malloc(sizeof(struct node));

//     printf("\nEnter new data to add at last: ");
//     scanf("%d", &newnode->data);

//     newnode->next = NULL;

//     if(head == NULL)
//     {
//         return newnode;
//     }

//     while(temp->next != NULL)
//     {
//         temp = temp->next;
//     }

//     temp->next = newnode;

//     return head;
// }
// int main()
// {
//     struct node *head = NULL;
//     int pos;
//     head = create();
//     display(head);
//     head = insertionatlast(head);
//     display(head);
// }