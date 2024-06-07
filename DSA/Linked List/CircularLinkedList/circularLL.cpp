#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* next;

    Node(int data)
    {
        val = data;
        next = NULL;
    }
};

class CircularLinkedList
{
    public:
    Node* head;

    CircularLinkedList()
    {
        head = NULL;
    }
    void insertAtHead(int val)
    {
        Node* new_node = new Node(val);

        if(head == NULL)
        {
            head = new_node;
            new_node -> next = head; // circular linked list
            return;
        }

        Node* tail = head;

        while(tail -> next != head)
        {
            tail = tail -> next;
        }

        //now tail is pointing to the last node

        tail -> next = new_node;
        new_node -> next = head;
        head = new_node;
    }

    void insertAtTail(int val)
    {
        Node* new_node = new Node(val);

        if(head == NULL)
        {
            head = new_node;
            new_node -> next = head;
            return;
        }
        
        Node* tail = head;

        while(tail -> next != head)
        {
            tail = tail -> next;
        }

        tail -> next = new_node;
        new_node -> next = head;
    }

    void deleteAtStart()
    {
        if(head == NULL)
        {
            return;
        }

        Node* temp = head;
        Node* tail = head;

        while(tail -> next != head)
        {
            tail = tail -> next;
        }
        head = head -> next;
        tail -> next = head;
        
        free(temp);
    }

    void deleteAtEnd()
    {
        if(head == NULL)
        {
            return;
        }

        Node* tail = head;
        Node* temp = head;

        while(temp -> next != head)
        {
            temp = temp -> next;
        }
        while(tail -> next != temp)
        {
            tail = tail -> next;
        }

        tail -> next = head;
        free(temp);
    }

    void display()
    {
        Node* temp = head;
        do
        {
            cout << temp -> val << "->";
            temp = temp -> next;
        } while(temp != head);
        cout << endl;
    }
};

int main()
{
    CircularLinkedList cll;

    cll.insertAtTail(1);
    cll.insertAtTail(2);
    cll.insertAtTail(3);
    cll.insertAtTail(4);
    cll.insertAtTail(5);
    cll.display();

    cll.deleteAtEnd();
    cll.display();
}

