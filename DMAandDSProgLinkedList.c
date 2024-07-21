#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
    int item;
    struct node *next;

};
void InsertAtLast(struct node **s, int data )
{
    struct node *n, *t;
    n=(struct node*)malloc(sizeof(struct node));
    n->item=data;
    n->next=NULL;
    if (*s==NULL)
    {
        *s=n;
    }
    else
    {
        t=*s;
        while (t->next!=NULL)
        {
            t=t->next;
        }
        t->next=n;
    }
}

void deletefirst(struct node **s)
{
    struct node *t;
    if(*s!=NULL)
    {
        t=*s;
        *s=t->next;
        free(t);
    }
}

void showlist( struct node *start )
{
    while (start)
    {
        printf("%d\t", start->item);
        start=start->next;

    }
    printf("\n");
}

int main ()
{
    struct node *start=NULL;
    InsertAtLast( &start, 25);
    InsertAtLast( &start, 35);
    InsertAtLast( &start, 47);
    showlist(start);
    printf("\n");
    deletefirst(&start);
    showlist(start);
    printf("\n");
    getch();
    return 0;
}
