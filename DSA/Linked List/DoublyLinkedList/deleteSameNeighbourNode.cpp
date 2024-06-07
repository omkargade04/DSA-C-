#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int data)
    {
        val = data;
        prev = NULL;
        next = NULL;
    }
};

class DoublyLinkedList
{
public:
    Node *head;
    Node *tail;

    DoublyLinkedList()
    {
        head = NULL;
        tail = NULL;
    }

    void insertAtTail(int val)
    {
        Node *new_node = new Node(val);

        if (tail == NULL)
        {
            head = new_node;
            tail = new_node;
            return;
        }

        tail->next = new_node;
        new_node->prev = tail;
        tail = new_node;

        return;
    }

    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << "<->";
            temp = temp->next;
        }
        cout << endl;
    }
};

void deleteSameNeighbourNode(Node *&head, Node *&tail)
{
    Node *curr = tail->prev;

    while (curr != head)
    {
        Node *nextNode = curr->next;
        Node *prevNode = curr->prev;

        if (prevNode->val == nextNode->val)
        {

            // prevNode -> next = nextNode;
            // nextNode -> prev = prevNode;
            // free(curr);

            curr->prev->next = curr->next;
            curr->next->prev = curr->prev;
            free(curr);
        }

        curr = prevNode;
    }
}

int main()
{
    DoublyLinkedList dll;

    dll.insertAtTail(2);
    dll.insertAtTail(1);
    //dll.insertAtTail(1);
    dll.insertAtTail(2);
    dll.insertAtTail(1);
    dll.display();
    deleteSameNeighbourNode(dll.head, dll.tail);
    dll.display();
}