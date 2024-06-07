#include <bits/stdc++.h>
using namespace std;

class Stack{
    int capacity;
    int *arr;
    int top;

    public:
    Stack(int c)
    {
        this -> capacity = c;
        arr = new int[c];
        this -> top = -1;
    }

    void push(int data)
    {
        if(this -> top == this -> capacity)
        {
            cout << "Overflow " << endl;
            return;
        }
        this -> top++;
        arr[this -> top] = data;
    }

    int pop()
    {
        if(this -> top == -1)
        {
            cout << "Underflow" << endl;
            return INT_MIN;
        }
        this -> top--;
    }

    int isTop()
    {
        if(this -> top == -1)
        {
            cout << "Underflow" << endl;
            return INT_MIN;
        }
        return this -> arr[this -> top];
    }

    int size()
    {
        return this -> top + 1;
    }

    bool isEmpty()
    {
        return this -> top == -1;
    }

    bool isFull()
    {
        return this -> top == this -> capacity - 1;
    }
};

int main()
{
    Stack st(3);
    st.push(1);
    st.push(2);
    st.push(3);
    cout << st.isTop() << endl;
    st.pop();
    cout << st.isTop() << endl;

    return 0;

}