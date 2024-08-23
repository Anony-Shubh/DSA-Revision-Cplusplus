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
};

int main()
{
    List ll;

    return 0;
}