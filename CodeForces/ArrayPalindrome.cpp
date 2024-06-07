#include<bits/stdc++.h>
#define ll long long
using namespace std;

int omkar(int n,vector<ll>&v){
    sort(v.begin(),v.end());
    //------------------------------------------
    // ll mx1 = *max_element(v.begin(),v.end());
    // int mx_cnt = 0;
    // for(int i=0;i<n;i++){
    //     if(v[i]== mx1){
    //         mx_cnt++;
    //     }
    // }
    // while(mx_cnt--){
    //     v.pop_back();
    // }
    // ll mx2 = *max_element(v.begin(),v.end());
    // while(mx_cnt--){
    //     v.push_back(mx1);
    // }
    //-------------------------------------------

    int p = n-1;
    while(v[p] == v[n-1]){
        p--;
    }
     int mx1 = v[n-1];
     int mx2 = v[p];
   
    //vector<int>a;
    while(n--){
    for(int i=0;i<n;i++){
        v[i] %= mx1;
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }cout<<endl;

    int flag = 0;
    for(int i=0;i<=n/2 && n!=0;i++){
        if(v[i] != v[n-i-1]){
            flag = 1;
            break;
        }
    }
    if(flag == 1){
        mx1 = mx2;
    }
    else{
        return mx1;
    }
    }
}
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<ll>v;
        for(int i=0;i<n;i++){
            int e;cin>>e;
            v.push_back(e);
        }
        ll ans = omkar(n,v);
        cout<<ans<<endl;
    }
    return 0;
}