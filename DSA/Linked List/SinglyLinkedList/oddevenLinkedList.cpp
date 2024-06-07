#include<iostream>
using namespace std;

class Node
{
    public:
    int val;
    Node* next;

    Node(int data)
    {
        val = data;
        this -> next = NULL;
    }
};

class LinkedList
{
    public:
    Node* head;

    LinkedList()
    {
        head = NULL;
    }

    void insertAtTail(int val)
    {
        Node* new_node = new Node(val);

        if(head == NULL)
        {
            head = new_node;
            return;
        }

        Node* temp = head;

        while(temp -> next != NULL)
        {
            temp = temp -> next;
        }

        temp -> next = new_node;
    }

    void display()
    {

        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

void oddevenLL(Node* &head)
{

    if(head == NULL)
    {
        return;
    }

    Node* oddHead = head;
    Node* evenHead = head -> next;

    Node* odd = oddHead;
    Node* even = evenHead;

    while(even != NULL && even -> next != NULL)
    {
        odd -> next = odd -> next -> next;
        even -> next = even -> next -> next;
        odd = odd -> next;
        even = even -> next;
    }

    odd -> next = evenHead;
}

int main()
{
    LinkedList ll;
    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
    ll.insertAtTail(4);
    ll.insertAtTail(5);
    ll.insertAtTail(6);

    ll.display();

    oddevenLL(ll.head);

    ll.display();

    return 0;
}