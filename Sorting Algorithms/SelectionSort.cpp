#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        int mid_id = i;
        for(int j=i+1;j<n;j++){
            if(v[j] < v[mid_id]){
                mid_id = j;
            }
        }
        if(i != mid_id){
            int temp = v[i];
            v[i] = v[mid_id];
            v[mid_id] = temp;

            v[i] = v[i] ^ v[mid_id];
            v[mid_id] = v[i] ^ v[mid_id];
            v[i] = v[i] ^ v[mid_id];

            //swap(v[i],v[mid_id]);
        }
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}