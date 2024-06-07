#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v;
    int n;cin>>n;
    for(int i=0;i<n;i++){
        int e;cin>>e;
        v.push_back(e);
    }
    int op=0;
    for(int j=0;j<n-1;j++){
        for(int i=0;i<n-j-1;i++){
            if(v[i]>v[i+1]){
                swap(v[i],v[i+1]);
                op++;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }cout<<endl;
    cout<<op<<endl;
    return 0;
}

//----------------------
//Striver's Method

void bubble_sort(){
    vector<int>v;
    int n;cin>>n;
    for(int i=n-1;i>=0;i--){
        int op = 0;
        for(int j=0;j<n-1;j++){
            if(v[j] > v[j+1]){
                swap(v[j],v[j+1]);
                op++;
            }
        }
        if(op == 0){
            break;
        }
    }
}