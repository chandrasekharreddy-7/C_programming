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