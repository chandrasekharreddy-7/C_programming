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