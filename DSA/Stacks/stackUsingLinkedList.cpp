#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node* next;

    Node(int data)
    {
        val = data;
        next = NULL;
    }
};

class Stack{
    Node* head;
    int capacity;
    int currSize;
    public:
    Stack(int c)
    {
        this -> capacity = c;
        this -> currSize = 0;
        head = NULL;
    }

    bool isEmpty()
    {
        return this -> head == NULL;
    }

    bool isFull()
    {
        return this -> currSize == this -> capacity;
    }

    void push(int data)
    {
        Node* new_node = new Node(data);
        if(this -> currSize == this -> capacity)
        {
            cout << "Overflow" << endl;
            return;
        }
        new_node -> next = this -> head;
        this -> head = new_node;
        this -> currSize++;
    }

    int pop()
    {
        if(this -> head == NULL)
        {
            cout << "Underflow " << endl;
            return INT_MIN;
        }

        Node* new_head = this -> head -> next;
        this -> head -> next = NULL;
        Node* toBeRemoved = this -> head;
        int result = toBeRemoved -> val;
        delete toBeRemoved;
        this -> head = new_head;
        return result;
    }

    int getTop()
    {
        if(this->head == NULL)
        {
            cout << "Underflow " << endl;
            return INT_MIN;
        }
        return this -> head -> val;
    }

    int size()
    {
        return this->currSize;
    }
};

int main()
{

}