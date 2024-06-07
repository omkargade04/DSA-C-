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

    void insertAtHead(int val)
    {
        Node* new_node = new Node(val);

        if(head == NULL)
        {
            head = new_node;
            tail = new_node;
            return;
        }
        new_node -> next = head;
        head -> prev = new_node;
        head = new_node;

        return;
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

    void insertAtPosition(int val, int pos)
    {

        Node* new_node = new Node(val);

        Node* temp = head;
        
        // int cnt = 1;
        // while(cnt != (pos-1))
        // {
        //     temp = temp -> next;
        //     cnt++;
        // }

        for(int i=1;i<pos-1;i++)
        {
            temp = temp -> next;
        }

        new_node -> next = temp -> next;
        // temp -> next = new_node;
        new_node -> prev = temp;
        temp -> next = new_node;
        new_node -> next -> prev = new_node;
    }

    void deleteAtStart()
    {
        if(head == NULL)
        {
            return;
        }

        Node* temp = head;
        head = head -> next;
        if(head == NULL)
        {
            tail = NULL;
            return;
        }
        head -> prev = NULL;
        free(temp);

        return;
    }

    void deleteAtEnd()
    {
        if(head == NULL)
        {
            return;
        }

        Node* temp = tail;
        tail = tail -> prev;
        if(tail == NULL)
        {
            head= NULL;
            return;
        }
        tail -> next = NULL;
        free(temp);

        return;

    }

    void deleteAtPosition(int pos)
    {
        Node* temp = head;
        int cnt = 1;
        while(cnt != pos)
        {
            temp = temp -> next;
            cnt++;
        }

        temp -> prev -> next = temp -> next;
        temp -> next -> prev = temp -> prev;
        free(temp);
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

int main()
{
    Node* new_node = new Node(4);

    DoublyLinkedList dll;
    
    dll.insertAtTail(1);
    dll.insertAtTail(2);
    dll.insertAtTail(3);
    dll.display();

    dll.insertAtPosition(4,2);

    dll.display();

    dll.deleteAtStart();
    dll.display();

    dll.deleteAtPosition(2);
    dll.display();


    return 0;
}