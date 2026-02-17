// struct node *insertionatfirst(struct node *head)
// {
//     struct node *newnode;
//     newnode = (struct node*)malloc(sizeof(struct node));
//     printf("enter the data to insert at first :");
//     scanf("%d",&newnode->data);
//     newnode->next = head;
//     head = newnode;
//     return head;