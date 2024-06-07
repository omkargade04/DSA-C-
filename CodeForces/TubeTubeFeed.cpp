#include<bits/stdc++.h>
using namespace std;

int main(){
    int q;cin>>q;
    while(q--){
        int n,t;
        cin>>n>>t;

        vector<int>a;
        vector<int>b;
        for(int i=0;i<n;i++){
            int e;cin>>e;
            a.push_back(e);
        }
        for(int i=0;i<n;i++){
            int e;cin>>e;
            b.push_back(e);
        }
        int mx = -1;
        int ans = -1;
        for(int i=0;i<n;i++){
            if(t >= a[i]){
               mx = max(mx,b[i]);
            }
            t-=1;
        }
        cout<<ans<<endl;
    }
}