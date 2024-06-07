#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* next;

    Node(int data)
    {
        val = data;
        this -> next = NULL;
    }

};

class LinkedList{
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

bool cycleExists(Node* head)
{

    if(!head)
    {
        return false;
    }

    Node* slow = head;
    Node* fast = head;

    while(fast && fast -> next)
    {
        slow = slow -> next;
        fast = fast -> next -> next;

        if(slow == fast)
        {
            return true;
        }
    }

    return false;
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
    ll.insertAtTail(7);
    ll.insertAtTail(8);

    //ll.display();

    ll.head -> next -> next -> next -> next -> next -> next -> next -> next = ll.head -> next -> next; 

    if(cycleExists(ll.head))
    {
        cout << "Cycle Exists" << endl;
    }
    else cout << "Cycle doesn't exists" << endl;

    return 0;
}
