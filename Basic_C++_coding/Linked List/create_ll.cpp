#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node* next;

    node(int x)   //constructor
    {
        this->data=x;
        this->next=NULL;
    }

};

 void insertAtHead(node* &head,int x)       //inserting at the begenning
    {
        node* temp=new node(x);    // constructor call 
        temp->next=head;
        head=temp;
    }

 void insertAtTail(node* &tail,int x)
    {
        node* temp=new node(x);    // constructor call 
        tail->next=temp;
        tail=temp; 
    }

    void printNode(node* &head)   // can also pass tail to print in order  
    {
        node* temp=head;         //created temperory pointed pointing to head pointer;
        while(temp!=NULL)
        {
            cout<<temp->data<<"->"<<"";
            temp=temp->next;
        }
    }

    void insertAtPosition(node* &head,node* &tail , int pos,int x)
    {
        node* temp=head;
        int count=1;
        if(pos==1)
        {
            insertAtHead(head,x);
            return;
        }
       

        while(count<pos-1)
        {
            temp=temp->next;
            count++;
        }
        
        if(temp->next==NULL)
        {
            insertAtTail(tail,x);
            return;
        }
        node* insertAtPosition=new node(x);
        insertAtPosition->next=temp->next;
        temp->next=insertAtPosition;
    }
int main()
{
        node * n1=new node(10);
        //cout<<n1->data<<"->"<<"";
        //cout<<n1->next<<endl;;

        node* head=n1;  //creating a head pointer 
        node* tail=n1;   // creating a tail pointer juust like head
        printNode(tail);
        cout<<endl;

        insertAtTail(tail,12);
        printNode(head);
        cout<<endl;

        insertAtTail(tail,15);
        printNode(head);cout<<endl;

        insertAtPosition(head,tail,4,14);
        printNode(head);cout<<endl;

        cout<<"head :"<<head->data<<endl;
        cout<<"tail :"<<tail->data<<endl;

    /*
   
    printNode(head);
    cout<<endl;

    insertAtHead(head,12);
     printNode(head);cout<<endl;

    insertAtHead(head,15);
    printNode(head);*/

    return 0;
}