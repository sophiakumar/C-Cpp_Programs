//                          SINGLY LINKED LIST INSERTION
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;

}*head,*temp,*newNode;
void createList(int n);
void insertAtAnyPos(int pos,int data1);
void display();
int n;
int main()
{
    int data1,pos;
    printf("Enter the total number of nodes");
    scanf("%d",&n);
    createList(n);

    printf("Data in list\n");
    display();
    printf("Enter the position");
    scanf("%d",&pos);

    printf("Enter the data to insert at  pos in list\n");
    scanf("%d",&data1);
    insertAtAnyPos(pos,data1);

    printf("\nData in list:\n");
    display();

    return 0;

}

void createList(int n)
{
    //struct node *newNode;
    int data1,i;
    head = (struct node*)malloc(sizeof(struct node));

    if (head==NULL)
    {
        printf("Unable to allocate memory");
    }
    else
    {
        printf("Enter data of node 1\t");
        scanf("%d",&data1);

        head-> data= data1;
        head->next=NULL;
        temp=head;

        for(i=2;i<=n;i++)
        {
            newNode=(struct node*)malloc(sizeof(struct node));

            if(newNode==NULL)
            {
                printf("unable to allocate mem");
            }
            {
                printf("Enter the data of newNode%d\t",i);
                scanf("%d",&data1);
                newNode->data=data1;
                newNode->next=NULL;
                temp->next=newNode;
                temp=newNode;
                 }
        }
        printf("Singly linked list is created successfully");
    }

}

void insertAtAnyPos(int pos,int data1)
{
    if(pos>n+1)
    {
        printf("invalid position");
    }
    else if(pos==n+1)
    {
        newNode=(struct node*)malloc(sizeof(struct node));
        newNode->data=data1;
        newNode->next=NULL;
        temp->next=newNode;
        
    }
    else if(pos==1)
    {
        newNode=(struct node*)malloc(sizeof(struct node));
        newNode->data=data1;
        newNode->next=head;
        head=newNode;
    }
    else
    {
        newNode=(struct node*)malloc(sizeof(struct node));
        struct node* temp1;
        int i=1;
        temp1=head;
        while(i<pos-1)
        {
            temp1=temp1->next;
            i++;
        }
        newNode->data=data1;
        newNode->next=temp1->next;
        temp1->next=newNode;
    }
}

void display()
{
    struct node *temp;
    if(head==NULL)
    {
        printf("list empty");
    }
    else
    {
        temp=head;
        while(temp!=NULL)
        {
            printf("%d",temp->data);
            temp=temp->next;
        }

    }
}

