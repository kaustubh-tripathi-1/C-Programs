#include<stdio.h>
#include<conio.h>
#include<stdlib.h>



typedef struct node
{
    int item;
     struct node *next;
}node;


void insertAtLast(node **, int);
void deleteLast(node **);
void deleteFirst(node **);
void viewList(node *);
int menu();


void insertAtLast(node **s, int data)
{

    node *new, *temp;
    new=(node*) malloc(sizeof(node));
    new->item=data;
    new->next=NULL;
    if(*s==NULL)
    {
        *s=new;
    }
    else
    {
        temp=*s;
        while(temp->next!=NULL)
            temp=temp->next;
        temp->next=new;            
    }
    
}
void deleteFirst(node **s)
{
   
    node *temp;
     if(*s!=NULL)
    {
        temp=*s;
        *s=temp->next;
        free(temp);
    }
    

}
void viewList(node *start)
{
    printf("List:\t");
    while(start)
    {   
        printf("%d\t", start->item);
        start=start->next;
    }
}

int menu()
{
    int choice;
    printf("\nWhat do you want to do?\n1. Insert a value at Last.\n");
    printf("2. Delete First Value.\n");
    printf("3. Delete Last Value.\n");
    printf("4. Exit.\n");
    printf("Enter your Choice:\n");
    scanf("%d", &choice);
    return choice;
}

void deleteLast(node **s)
{
    if (*s == NULL) // If the list is empty, do nothing
    {
        return;
    }

    if ((*s)->next == NULL) // If there is only one node in the list
    {
        free(*s);
        *s = NULL;
        return;
    }

    node *temp = *s;
    while (temp->next->next != NULL) // Traverse to the second-to-last node
    {
        temp = temp->next;
    }

    free(temp->next); // Free the last node
    temp->next = NULL; // Update the second-to-last node's next pointer
}



int main()
{
    node *start=NULL;
    int data;
    while(1)
    {
        system("cls");
        viewList(start);
        switch(menu())
        {
            case 1:
                printf("Enter a number to add in the List:\n");
                scanf("%d", &data);
                insertAtLast(&start, data);
                break;
            case 2:
                deleteFirst(&start);
                break;
            case 3:
                deleteLast(&start);
                break;
            case 4:
                exit(0);
                
            default:
                printf("Invalid Choice:\n");
                break;
        }
    }    
    getch();
    return 0;
    
}