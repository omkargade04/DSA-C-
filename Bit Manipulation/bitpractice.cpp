#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    vector<int>v;
    v.push_back(0);
    int cnt = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<32;j++){
            if(i & 1 == 1){
                cnt++;
            }
            i = i >> 1;
        }
        v.push_back(cnt);
        cnt = 0;
    }
    for(int i=0;i<=n;i++){
        cout<<v[i]<<",";
    }cout<<endl;
}