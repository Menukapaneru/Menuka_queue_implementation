#include<iostream>
using namespace std;
int queue[100],n=100,front=-1,rear=-1;
void Insert()
{
    int x;
    if(rear == n-1)
    {
        cout<<"OVERFLOW OCCURED"<<endl;
    }
    else if(front==-1 || rear==-1)
   {
    front=0;
    rear=0;
    }
    else
    {
    cout<<"Insert element in queue:"<<endl;
    cin>>x;
    rear++;
    queue[rear]=x;
    }
}
 void Delete()
{
    if(front==-1||front>rear)
    {
    cout<<"UNDERFLOW";
    }
    else
    {
        cout<<"Enter elememt to be deleted from queue:"<<queue[front]<<endl;
        front++;
    }
}
  void display()
{
    if(front==-1)
    {
    cout<<"QUEUE IS EMPTY"<<endl;
    }
    else
    {
        cout<<"elememts in queue are:";
        for(int i=front;i<=rear;i++)
        cout<<queue[i]<<endl;
    }
}
int main()
{
    int ch;
    cout<<"(1) INSERT ELEMENT TO QUEUE"<<endl;
    cout<<"(2)DELETE ELEMENT FROM QUEUE"<<endl;
    cout<<"(3)DISPLAY ALL ELEMENTS OF QUEUE"<<endl;
    cout<<"(4)EXIT"<<endl;
    do
    {
        cout<<"Enter your choice:"<<endl;
        cin>>ch;
        switch(ch)
        {
            case 1:Insert();
            break;
            case 2:Delete();
            break;
            case 3:display();
            break;
            case 4:cout<<"EXIT"<<endl;
            break;
            default:cout<<"INVALID CHOICE"<<endl;
        }
    }while(ch!=4);
    return 0;
}
