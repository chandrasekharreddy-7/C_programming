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