// #include <stdio.h>
// #include <stdlib.h>

// struct node
// {
//     int data;
//     struct node *next;
// };

// struct node* create()
// {
//     struct node *head = NULL, *newnode = NULL, *temp = NULL;
//     int choice = 1;

//     while(choice == 1)
//     {
//         newnode = (struct node*)malloc(sizeof(struct node));

//         printf("Enter the data: ");
//         scanf("%d", &newnode->data);

//         newnode->next = NULL;

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

//         printf("Enter 1 to continue and 0 to exit: ");
//         scanf("%d", &choice);
//     }

//     return head;
// }
// struct node* display(struct node *head)
// {
//     int count = 0;
//     struct node *x = head;

//     if(head == NULL)
//     {
//         printf("List is empty\n");
//         return head;
//     }

//     while(x != NULL)
//     {
//         printf("%d -> ", x->data);
//         x = x->next;
//         count++;
//     }

//     printf("NULL\n");
//     printf("No of nodes = %d\n", count);

//     return head;
// }
// struct node *deletion(struct node *head,int pos)
// {
//     struct node *temp,*prev;
//     int i;
//     if (head == NULL)
//     {
//         printf("List is empty!.");
//         return head;
//     }
//     if (pos == 1)
//     {
//         temp = head;
//         head = head -> next;
//         free(temp);
//         return head;
//     }
//     temp = head;
//     for(i = 1;i < pos;i++)
//     {
//         prev = temp;
//         temp = temp -> next;
//     }
//     prev->next = temp->next;
//     free(temp);
//     return head;
// }
// int main()
// {
//     struct node *head = NULL;
//     int pos;
//     head = create();
//     display(head);
//     printf("enter position to delete :");
//     scanf("%d",&pos);
//     head = deletion(head,pos);
//     display(head);
//     return 0;
// }