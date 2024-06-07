#include <iostream>
using namespace std;

class Node
{
public:
    int data;



    
    Node *next;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    //destructor
    ~Node(){
        int value = this -> data;
        //memory free

        if(this -> next != NULL){
            delete next;
            this -> next = NULL;
        }

        cout<<"memory free " << value <<endl;
    }


};

void insertAtHead(Node *&head, int d)
{
    // create new node

    Node *temp = new Node(d);
    temp->next = head;
    head = temp;

    // head is pointing at already created node
}

void insertAtTail(Node* &tail , int d){
    // create new node

    Node *temp = new Node(d);
    tail -> next = temp;
    tail = temp;

}

void insertAtPosition(Node* &tail, Node* &head, int position, int d){

    //inserting at Start

    if(position == 1){
        insertAtHead(head, d);
        return ;
    }

    Node* temp = head;
    int cnt = 1;

    while(cnt < position-1){
        temp = temp -> next;
        cnt++;
    }

    //inserting at Last Position

    if(temp -> next == NULL){
        insertAtTail(tail,d);
        return ;
    }

    //creating a node for d
    Node* nodeToInsert = new Node(d);

    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;

}

void deleteNode(int position, Node* &head){
    if(position == 1){
        Node* temp = head;
        head = head -> next;

        //memory free start node

        temp -> next = NULL;

        delete temp;
    }
    else{

        //deleting any middle node or last node
        Node* current = head;
        Node* previous = NULL;

        int cnt = 1;
        while(cnt < position){
            previous = current;
            current = current -> next;
            cnt++;
        }

        previous -> next = current -> next;
        current -> next = NULL;
        delete current;


    }
}

void print(Node *&head)
{

    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{

    Node *node1 = new Node(10);
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;

    Node *head = node1;
    Node* tail = node1;

    print(head);

    insertAtTail(tail , 12);

    print(head);

    insertAtTail(tail , 20);

    print(head);

    insertAtPosition(tail, head, 3, 13);
    print(head);

    deleteNode(3, head);
    print(head);


    return 0;
}