#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n,l,r,k;
        cin>>n>>l>>r>>k;
        vector<int>v;
        for(int i=0;i<n;i++){
            int e;cin>>e;
            v.push_back(e);
        }
        int count = 0;
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++){
            if(v[i] <= r && v[i] >= l && v[i] <= k){
                k -= v[i];
                count++;
            }
        }
        cout<<count<<endl;
    }
}