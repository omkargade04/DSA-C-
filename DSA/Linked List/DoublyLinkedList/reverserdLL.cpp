#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* next;
    Node* prev;

    Node(int data)
    {
        val = data;
        prev = NULL;
        next = NULL;
    }
};

class DoublyLinkedList{
    public:
    Node* head;
    Node* tail;

    DoublyLinkedList()
    {
        head = NULL;
        tail = NULL;
    }

    void insertAtTail(int val)
    {
        Node* new_node = new Node(val);
        
        if(tail == NULL)
        {
            head = new_node;
            tail = new_node;
            return;
        }

        tail -> next = new_node;
        new_node -> prev = tail;
        tail = new_node;

        return;
    }

    void display()
    {
        Node* temp = head;
        while(temp != NULL)
        {
            cout << temp -> val << "<->";
            temp = temp -> next;
        }cout << endl;
    }

};

void reversedDll(Node* &head, Node* &tail)
{
    Node* curr = head;

    while(curr != NULL)
    {
        Node* nextPtr = curr -> next;

        curr -> next = curr -> prev;
        curr -> prev = nextPtr;
        curr = nextPtr;
    }
    //swapping head and tail pointers;
    Node* newHead = tail;
    tail = head;
    head = newHead;
}

int main()
{
    DoublyLinkedList dll;
    
    dll.insertAtTail(1);
    dll.insertAtTail(2);
    dll.insertAtTail(3);
    dll.insertAtTail(4);
    dll.display();
    reversedDll(dll.head, dll.tail);
    dll.display();
}