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

void intersectionNode(Node* head1, Node* head2){

    Node* ptr1 = head1;
    Node* temp1 = ptr1;

    Node* ptr2 = head2;
    Node* temp2 = ptr2;

    int sizeOfLL1 = 0;
    int sizeOfLL2 = 0;

    // the loop below is calculating the length of the linkedlists-----

    while(temp1 != NULL){
        sizeOfLL1++;
        temp1 = temp1 -> next;
    }
    while(temp2 != NULL){
        sizeOfLL2++;
        temp2 = temp2 -> next;
    }

    // the below steps are making sure that the two pointers point at equal nodes

    if(sizeOfLL1 > sizeOfLL2){

        //calculating the difference in the size of two linkedlist
        int k = sizeOfLL1 - sizeOfLL2;

        //running the loop till both pointers point at the same postion 
        while(k--){
            ptr1 = ptr1 -> next;
        }
    }
    else{

        //calculating the difference in the size of two linkedlist
        int k = sizeOfLL2 - sizeOfLL1;

        //running the loop till both pointers point at the same postion
        while(k--){
            ptr2 = ptr2 -> next;
        }
    }

    //checking if the values at that pointers are equal or not
    while(ptr1 != ptr2){

        ptr1 = ptr1 -> next;
        ptr2 = ptr2 -> next;

    }

     //if equal then that is the intersection point
    if(ptr1 == ptr2){
        cout<<ptr2->val<<endl;
    }
    else{
        cout << -1 << endl;
        return;
    } 

}

int main()
{
    LinkedList ll1;
    ll1.insertAtTail(1);
    ll1.insertAtTail(2);
    ll1.insertAtTail(3);
    ll1.insertAtTail(4);
    ll1.insertAtTail(5);
    // 1->2->3->4->5->NULL

    LinkedList ll2; 
    ll2.insertAtTail(6);
    ll2.insertAtTail(7);
    ll2.head -> next -> next = ll1.head -> next -> next -> next;
    //6->7->4->5->NULL

    ll1.display();
    ll2.display();
    
    intersectionNode(ll1.head, ll2.head);

    return 0;
}