#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    // constructor
    Node(int data)
    {
        val = data;
        this->next = NULL;
    }
};

class LinkedList
{
public:
    Node *head;

    LinkedList()
    {
        head = NULL;
        return;
    }

    void insertAtTail(int data)
    {

        Node *new_node = new Node(data);
        Node *temp = head;

        if (head == NULL)
        {
            head = new_node;
            return;
        }

        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = new_node;
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

bool equalElements(Node *head1, Node *head2)
{

    Node *ptr1 = head1;
    Node *ptr2 = head2;

    while (ptr1 != NULL && ptr2 != NULL)
    {
        if (ptr1->val != ptr2->val)
        {
            return false;
        }

        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }

    if (ptr1 == NULL && ptr2 == NULL)
    {
        return true;
    }

    return true;
}

int main()
{
    LinkedList ll1;
    ll1.insertAtTail(1);
    ll1.insertAtTail(2);
    ll1.insertAtTail(4);

    LinkedList ll2;
    ll2.insertAtTail(1);
    ll2.insertAtTail(2);
    ll2.insertAtTail(3);

    ll1.display();
    ll2.display();
    
    cout << equalElements(ll1.head, ll2.head) << endl;

    return 0;
}