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

void deleteDuplicateElement(Node* &head)
{
    Node* curr_node = head;
    while (curr_node)
    {
        while (curr_node->next && curr_node->val == curr_node->next->val)
        {
            Node* temp = curr_node->next;
            //need to shift the current node ka next to current node ka next ka next
            curr_node -> next = curr_node -> next -> next;
            //delete duplicate elements
            free(temp);
            // curr_node->next = curr_node->next->next;
        }
        /*
        this loop ends when current node and next node values are different
        or linked list ends
        */
        curr_node = curr_node->next;
        
    }
}

int main()
{
    LinkedList ll;

    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
    ll.insertAtTail(3);
    ll.insertAtTail(3);

    ll.display();

    deleteDuplicateElement(ll.head);
    ll.display();
}