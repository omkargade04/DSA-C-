#include <iostream>
using namespace std;

class Node
{
public:
    int val = 0;
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
    }

    void insertAtTail(int value)
    {

        Node *new_node = new Node(value);

        if (head == NULL)
        {
            head = new_node;
            return;
        }

        Node *temp = head;

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

Node *reverseLinkedList(Node *&head)
{
    //Here what we need to do is reverse the order of Linked List

    //So first we create two pointers prevPtr and currPtr

    Node *prevPtr = NULL;//this is currently pointing at NULL before the first node
    Node *currPtr = head;//this is currectly pointing at first node

    //loop runs till the currPtr is not NULL
    while (currPtr != NULL)
    {
        //we create another pointer called nextPtr which points at the node next to the currPtr
        //we create this pointer to store the next of currPtr so that we can move further in the LinkedList
        Node *nextPtr = currPtr->next;

        //now the currPtr ka next will point to the prevPtr which se behind the currPtr and hence reverses the respective node
        currPtr->next = prevPtr;

        //now that the respective nodes are reversed 
        //we move the pointers to next nodes
        prevPtr = currPtr;
        currPtr = nextPtr;

        //this process will continue till the currPtr doesn't points at NULL
    }

    Node *new_head = prevPtr;
    return new_head;
}

Node *reverseRecursion(Node *&head){
    //base case
    if(head == NULL || head -> next == NULL){
        return head;
    }

    //recursive case
    Node* new_head = reverseRecursion(head -> next);
    head -> next -> next = head;
    head -> next = NULL;//head is now pionting to last node in reversed LinkedList
    return new_head;
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

    ll.head = reverseRecursion(ll.head);
    ll.display();
    ll.head = reverseLinkedList(ll.head);
    ll.display();

    return 0;
}