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
