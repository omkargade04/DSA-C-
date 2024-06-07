#include<iostream>
using namespace std;

class Node
{
    public:
    int val;
    Node* next;

    //constructor
    Node(int data)
    {
        val = data;
        this->next = NULL;
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
         Node *new_node = new Node(val);

        if(head == NULL)
        {
            head = new_node;
            return;
        }
        Node *temp = head;
       

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

Node* findMiddle(Node* &head)
{
    Node* slow = head;
    Node* fast= head;

    while(fast != NULL && fast -> next != NULL)
    {
        slow = slow -> next;
        fast = fast -> next -> next;
    }

    return slow;
}

int main()
{
    LinkedList ll;
    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
    ll.insertAtTail(4);
    ll.insertAtTail(5);

    ll.display();

    Node* ans = findMiddle(ll.head);
    cout << ans -> val << endl;

}

