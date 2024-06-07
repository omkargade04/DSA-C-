#include<bits/stdc++.h>
using namespace std;

void solve(){
        //map<string,int>m1;
    int n,k;
    cin>>n>>k;
    string s;
    int ans = 0;
    int mx = INT_MIN;
    int count = 0;

    map<char,int>m;

    for(int i=0;i<n;i++){
        cin>>s;
        for(int j=0;j<k;j++){
            m[s[j]]++;
        }
    }

    for(auto i : m){
        ans = i.second;
        if(mx == ans){
            count++;
        }
        mx = max(mx,ans);
    }
    if(count == 0){
        cout<<1<<endl;
    }
    else{
        cout<<count+1<<endl;
    }
}

int main(){

int t;cin>>t;
while(t--){
    solve();
}
}