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

int length(Node* head){
    Node* ptr = head;
    int size = 0;

    while(ptr != NULL){
        ptr = ptr -> next;
        size++;
    }

    return size;
}

void removeKthNode(Node* head, int k){

    Node* ptr = head;

    int n = length(head);

    int pos = n - k - 1;

    while(pos--){
        ptr = ptr -> next;
    }

    Node* temp = ptr -> next;

    ptr -> next = ptr -> next -> next;

    free(temp);
}

int main(){

    LinkedList ll;

    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
    ll.insertAtTail(4);
    ll.insertAtTail(5);
    ll.insertAtTail(6);

    ll.display();

    removeKthNode(ll.head, 5);

    ll.display();

}
