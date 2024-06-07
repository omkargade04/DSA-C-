#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node* next;

    //constructor
    Node(int data){
        val = data;
        next = NULL;
    }
};

void insertAtHead(Node* &head, int val){

    //insertion of element at the starting position

    //Here a New Node is being created at the starting position
    Node* new_node = new Node(val);
    new_node -> next = head;
    head = new_node;
}

void insertAtTail(Node* &head, int val){

    //insertion of the element at the last position

    //Here a New Node is being created at the starting position
    Node* new_node = new Node(val);

    //a temporary pointer points at head
    Node* temp = head;

    //The while loop makes sure that the temp reaches at the last position
    while(temp -> next != NULL){
        temp = temp -> next;
    }

    // temp has reached at NULL and value is added
    temp -> next = new_node;
}

void insertAtPositon(Node* head, int val, int position){

    if(position == 0){
        insertAtHead(head, val);
        return;
    }

    int curr_pos = 0;
    //Creating a temporary pointer which points at the head
    Node* temp = head;
    
    //This while loop transfers the temp to the position next to the position where we need to insert the element
    while(curr_pos != position-1){
        temp = temp -> next;
        curr_pos++;
    }

    //A New Node is created 
    Node* new_node = new Node(val);

    /*First the temp->next is pointing to the element at the given position.
    So now the new_node -> next will point to the element at the specified position using the below code
    */
    new_node -> next = temp -> next;

    //And now the temp->next will point at the new_node
    temp -> next = new_node;

    //And finally the element is inserted at the specified position.
}

void updateAtPosition(Node* head, int k, int val)
{

    Node* temp = head;
    int curr_pos = 0;

    while(curr_pos != k){
        temp = temp -> next;
        curr_pos++;
    }

    temp -> val = val;
}

void deletionAtHead(Node* &head)
{

    Node* temp = head;

    //Here head is now pointing to the next element
    head = head -> next;
    free(temp);

}

void deletionAtTail(Node* &head)
{

    Node* second_last = head;

    //Here the while loop is used to detect the second last element
    while(second_last -> next -> next != NULL){
        second_last = second_last -> next;
    }
    //Temp stores the address of last element to remove it
    Node* temp = second_last -> next;
    second_last -> next = NULL;
    free(temp);

}

void deletionAtPosition(Node* &head, int position)
{

    if(position == 0){
        deletionAtHead(head);
        return;
    }

    Node* prev_node = head;
    int curr_pos = 0;

    //Here the while loop is used to locate the position where deletion is to be done
    while(curr_pos != position-1){
        prev_node = prev_node -> next;
        curr_pos++;
    }

    //temp is used to store the address of the element which needs to be deleted
    Node* temp = prev_node -> next;
    //the code below points to the element next to temp
    prev_node -> next = prev_node -> next -> next;

    //temp is being deleted.
    free(temp);

}

void deleteAtElement(Node* &head)
{
    Node* temp = head;

   // while(head -> next != NULL)
    {
        temp = head -> next;

        head -> next = head -> next -> next;
        free(temp);
        head = head -> next;
    }
}

void display(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->val<<"->";
        temp = temp -> next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    Node* head = NULL;
   insertAtHead(head,2);
   display(head);
   insertAtHead(head,1);
   display(head);
   
   insertAtTail(head, 3);
   display(head);
   insertAtTail(head, 5);
   display(head);

   insertAtPositon(head, 4, 3);
   display(head);

    deleteAtElement(head);
    display(head);

//    deletionAtHead(head);
//    display(head);

//    deletionAtTail(head);
//    display(head);

//    deletionAtPosition(head, 1);
//    display(head);
}
