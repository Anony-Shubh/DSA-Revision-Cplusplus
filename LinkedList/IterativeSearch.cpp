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
    ~Node()
    {
        if(next!=NULL)
        {
            delete next;
            next = NULL;
        }
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
    ~List()
    {
        if(head != NULL)
        {
            delete head;
            head = NULL;
        }
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
    void popFront()
    {
        if(head == NULL)
        {
            cout<<"Head is empty"<<endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        temp=NULL;
        delete temp;
        cout<<"Head popped"<<endl;
    }
    void popBack()
    {
        Node* temp = head;
        while(temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=NULL;
        delete tail;
        tail = temp;
        cout<<"Tail popped"<<endl;
    }

    int itrSearch(int key)
    {
        Node* temp = head;
        int idx = 0;
        while(temp!=NULL)
        {
            if(temp->data==key)
            {
                cout<<"Key "<<key<<" found at index: ";
                return idx;
                cout<<endl;
            }
            temp = temp->next;
            idx++;
        }
        return -1;
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

    cout<<ll.itrSearch(6);
    return 0;
}