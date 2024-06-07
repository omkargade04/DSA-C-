#include<iostream>
#include<stack>
using namespace std;

stack<int> copyStack(stack<int>&input)
{
    stack<int>temp;
    while(!input.empty())
    {
        int curr = input.top();
        input.pop();
        temp.push(curr);
    }
    stack<int>result;
    while(!temp.empty())
    {
        int curr = temp.top();
        temp.pop();
        result.push(curr);
    }

    return result;
}

void rescursive(stack<int>&st, stack<int>&result)
{
    if(st.empty())
    {
        return;
    }
    int curr = st.top();
    st.pop();
    rescursive(st, result);
    result.push(curr);

}

int main()
{
    stack<int> st;
    for(int i=1;i<=5;i++)
    {
        st.push(i);
    }

    stack<int> ans = copyStack(st);

    while(!ans.empty())
    {
        cout << ans.top() << endl;
        ans.pop();
    }

    return 0;
    
}
