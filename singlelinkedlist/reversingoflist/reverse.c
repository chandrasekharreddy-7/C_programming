#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node* create()
{
    struct node *head = NULL, *newnode = NULL, *temp = NULL;
    int choice = 1;

    while(choice == 1)
    {
        newnode = (struct node*)malloc(sizeof(struct node));

        printf("Enter the data: ");
        scanf("%d", &newnode->data);

        newnode->next = NULL;

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

        printf("Enter 1 to continue and 0 to exit: ");
        scanf("%d", &choice);
    }

    return head;
}
struct node* display(struct node *head)
{
    int count = 0;
    struct node *x = head;

    if(head == NULL)
    {
        printf("List is empty\n");
        return head;
    }

    while(x != NULL)
    {
        printf("%d -> ", x->data);
        x = x->next;
        count++;
    }

    printf("NULL\n");
    printf("No of nodes = %d\n", count);

    return head;
}
struct node *reverse_list(struct node *head)
{
    struct node *p = NULL;
    struct node *c = head;
    struct node *n = NULL;
    while(c != NULL)
    {
        n = c -> next;
        c -> next = p;
        p = c;
        c = n;
    }
    head = p;
    return head;
}
int main()
{
    struct node *head = NULL;
    head = create();
    display(head);
    printf("reversed list:\n");
    head = reverse_list(head);
    display(head);
}