#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        ll int n; cin>>n;
        ll int a[n];
        ll int res;
        for(int i=0; i<n; i++){
            cin>>a[i];
            res = abs(a[n-1]-a[0]);
        }

        for(int i=1; i<n/2; i++){
            res = __gcd(res, abs(a[n-i-1] - a[i])); 
        }

        cout<<res<<endl;
    }
}