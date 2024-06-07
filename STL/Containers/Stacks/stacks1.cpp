#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;cin>>n;

    stack<int>s;

    for(int i=0;i<n;i++){
        int e;cin>>e;
        s.push(e);
    }

    s.pop();

   cout<<s.top()<<endl;

   if(s.empty()){
    cout<<"EMPTY"<<endl;
   }
   else{
    cout<<"NOT EMPTY"<<endl;
   }

}