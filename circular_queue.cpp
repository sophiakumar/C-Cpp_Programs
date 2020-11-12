#include<bits/stdc++.h>
using namespace std;
int a[5],front=-1,rear=-1,cnt=0,n;
void enqueue()
{
    if((front==0 && rear==n-1) ||  (rear+1==front)) cout<<"Overflow"<<endl;
    else
    {
        int x; cin>>x;
        if(front==-1)
        {
            front=(front+1)%n;
            rear=(rear+1)%n;
            a[front]=x;
        }
        else
        {
            rear=(rear+1)%n;
            a[rear]=x;
        }
        cnt++;   
    }
    
}
void dequeue()
{
    if(front==rear==-1)
    {
        cout<<"Underflow"<<endl;
    }
    else
    {
        front=(front+1)%n;
        cnt--;
    }
    
}
void display()
{
     if (front == -1) 
    { 
        printf("\nQueue is Empty"); 
        //return; 
    } 
    printf("\nElements in Circular Queue are: "); 
    if (rear >= front) 
    { 
        for (int i = front; i <= rear; i++) 
            printf("%d ",a[i]); 
    } 
    else
    { 
        for (int i = front; i < n; i++) 
            printf("%d ", a[i]); 
  
        for (int i = 0; i <= rear; i++) 
            printf("%d ", a[i]); 
    } 
}
int32_t main()
{
    printf("Enter the number of elements in the array");
    scanf("%d",&n);
 while(1)
 {
     int choice; cout<<"Enter the choice"; cin>>choice;
     switch(choice)
     {
       case 1:
       enqueue();
       break;
       case 2:
       dequeue();
       break;
       case 3:
       display();
       break;
       case 4:
       exit(0);
     }
 }
return 0;
}