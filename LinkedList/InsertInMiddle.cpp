#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;

    //constructor
    Node(int val)
    {
        data = val;
        next = NULL;
    }

};

class List
{
    Node *head;
    Node *tail;

    //constructor
    public:
    List()
    {
        head = NULL;
        tail = NULL;
    }
    void push_front(int val)
    {
        Node * newNode = new Node(val);
        if(head == NULL)
        {
            head = tail = newNode;
        } else
        {
            newNode->next = head;
            head = newNode;
        }
    }
    void push_back(int val)
    {
        Node * newNode = new Node(val);
        if(head==NULL)
        {
            head=tail=newNode;
        } else
        {
            tail->next=newNode;
            tail=newNode;
        }
    }
    void printLL()
    {
        Node* temp = head;

        while(temp!=NULL)
        {
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
    void insert(int val, int pos)
    {
        Node* newNode=new Node(val);
        Node* temp = head;
        for(int i=0;i<pos-1;i++)
        {
            if(temp==NULL)
            {
                cout<<"Invalid Position";
            }
            temp = temp->next;
        }
        newNode->next=temp->next;
        temp->next=newNode;
    }
};

int main()
{
    List ll;
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);

    ll.push_back(4);
    ll.push_back(5);
    ll.push_back(6);

    ll.printLL();
    ll.insert(87, 3);
    ll.printLL();


    return 0;
}