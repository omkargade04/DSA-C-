#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> &v,int n){
    sort(v.begin(),v.end());
    int mx_cnt = 0;
    int mx = *max_element(v.begin(),v.end());
    for(int i=0;i<n;i++){
        if(v[i] == mx){
            mx_cnt++;
        }
    }
    while(mx_cnt--){
        v.pop_back();
    }
    int mx2 = *max_element(v.begin(),v.end());
    
    return mx2;

}

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++){
            int e;cin>>e;
            v.push_back(e);
        }

        cout<<solve(v,n)<<endl;
    }
}