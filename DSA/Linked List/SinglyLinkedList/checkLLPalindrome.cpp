#include<iostream>
using namespace  std;
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

 bool isPalindrome(Node* &head)
 {
    Node* slow = head;
    Node* fast = head;

    //1.find the middle element

    while(fast && fast -> next)
    {
        slow = slow -> next;
        fast = fast -> next -> next;
    }

    //now slow is pointing to middle element
    //2. break the LL in middle

    Node* curr = slow -> next;
    Node* prev = slow;
    slow -> next = NULL;

    //3. Reverse the second half of the linked list

    while(curr)
    {
        Node* nextNode = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = nextNode;
        
    }

    //4. Check if the two Linked List are equal

    Node* head1 = head;
    Node* head2 = prev;

    while(head2)
    {
        if(head1 -> val != head2 -> val)
        {
            return false;
        }

        head1 = head1 -> next;
        head2 = head2 -> next;
    }

    return true;

 }

 int main()
{
    LinkedList ll;
    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
    ll.insertAtTail(3);
    ll.insertAtTail(2);
    ll.insertAtTail(1);

    ll.display();

    if(isPalindrome(ll.head))
    {
        cout << "It is a Palindrome" << endl;
    }
    else{
        cout << "It is not a Palindrome" << endl;
    }

}
