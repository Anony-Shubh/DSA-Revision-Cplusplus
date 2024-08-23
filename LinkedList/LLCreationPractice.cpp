#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node * next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }

};
class List
{
    Node * head;
    Node * tail;
    public:
    List()
    {
        head = NULL;
        tail = NULL;
    }
    void pushFront(int val)
    {
        Node * newNode = new Node(val);
        if(head==NULL)
        {
            head = tail = newNode;
        } else
        {
            newNode->next=head;
            head=newNode;
        }
    }
    void pushBack(int val)
    {
        Node* newNode = new Node(val);
        if(head == NULL)
        {
            head=tail=NULL;
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
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }
};

int main()
{
    List ll;
    ll.pushFront(5);
    ll.pushFront(4);
    ll.pushFront(3);
    ll.pushFront(2);
    ll.pushFront(1);
    ll.pushBack(1);
    ll.pushBack(2);
    ll.pushBack(3);
    ll.pushBack(4);
    ll.pushBack(5);
    ll.printLL();
    return 0;
}