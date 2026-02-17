// struct node* insertlast(struct node *head)
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