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

Node* rotateByK(Node* &head, int k)
{
    //1. find length of Linked List
    int n = 0;
    //2. find tail node

    Node* tail = head;

    while(tail -> next)
    {
        n++;//caluclate length
        tail = tail -> next;//finding last node
    }
    n++;//for counting last node

    k = k % n;

    if(k == 0)
    {
        return head;
    }

    tail -> next = head;//pointing last node to first node

    //3. to traverse n-k nodes
    Node* temp = head;

    for(int i=1;i<n-k;i++)
    {
        temp = temp -> next;
    }

    //temp is pointing at (n-k)th node

    Node* newHead = temp -> next;
    temp -> next = NULL;

    return newHead;

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

    ll.head = rotateByK(ll.head, 5);

    ll.display();

    return 0;
}