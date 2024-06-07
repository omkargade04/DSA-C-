#include<iostream>
using namespace std;

class Node{
    public:
    int val = 0;
    Node* next;

    //constructor
    Node(int data){
        val = data;
        this->next =  NULL;
    }
};

class LinkedList{
    public:
        Node* head;

        LinkedList(){
            head = NULL;
        }

        void insertAtTail(int value){
            
            Node* new_node = new Node(value);

            if(head == NULL){
                head = new_node;
                return;
            }

            Node* temp = head;

            while(temp -> next != NULL){
                temp = temp -> next;
            }

            temp -> next = new_node;

        }

        void display(){

            Node* temp = head;
            while(temp != NULL){
                cout<<temp -> val<<"->";
                temp = temp -> next;
            }cout<<"NULL"<<endl;
        }
};

void deleteAlternateElement(Node* head){

    //a current node is created at head which moves in the Linked List
    Node* curr_node = head;

    while(curr_node != NULL && curr_node -> next != NULL){

        Node* temp = curr_node -> next ;// this is the node to be deleted temp is storing the address of curr_node

        //now the curr_node -> next will point to the element after the one (element) we need to skip
        curr_node -> next = curr_node -> next -> next;

        //temp is removed
        free(temp);

        //we change the position of curr_node to the next element
        curr_node = curr_node -> next;

        //and the process repeats

    }
}


int main(){

    LinkedList ll;

    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
    ll.insertAtTail(4);
    ll.insertAtTail(5);

    ll.display();

    deleteAlternateElement(ll.head);
    ll.display();

}
