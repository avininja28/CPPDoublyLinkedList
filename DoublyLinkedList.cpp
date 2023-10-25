#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node *next;
    node *prev;

    node()
    {
        data=0;
        next=nullptr;
        prev=nullptr;
    }
};

int main()
{
    node *head;
    node *tail;
    node *newnode1=new node;
    newnode1->data=10;

    head=newnode1;

    node *newnode2=new node;
    newnode2->data=20;

    node *newnode3=new node;
    newnode3->data=30;

    node *newnode4=new node;
    newnode4->data=40;
    
    tail=newnode4;

    newnode1->next=newnode2;
    newnode2->next=newnode3;
    newnode3->next=newnode4;

    newnode4->prev=newnode3;
    newnode3->prev=newnode2;
    newnode2->prev=newnode1;

    cout<<endl;
    cout<<"Printing through loop"<<endl;
    node *temp=head;
        while(temp!=NULL)
        {
            cout<<"data: "<<temp->data<<"\tSelf address: "<<temp<<"\tNext address: "<<temp->next<<"\tPrevious address: "<<temp->prev<<endl;
            temp=temp->next;
        }
}