#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++){
            int e;cin>>e;
            v.push_back(e);
        }
        map<int,int>M;
        int max_ht = 0;
        for(int i=0;i<n;i++){
            M[v[i]]++;
        }

//map<int,int> :: iterator it; 


    for(auto it : M){
        max_ht = max(max_ht,it.first + it.second - 1);
    }
    cout<<max_ht<<endl;
    } 

}

//---------------------

int main(){
    int t;cin>>t;
    while(t--){

//         int n;cin>>n;
// vector<int>v;
// for(int i=0;i<n;i++){
//     int e;cin>>e;
//     v.push_back(e);
}
        // sort(v.begin(),v.end());

// int freq = 0;
// int ans = v[0];
// int max_height = 0;
// int diff = 0;
// for(int i=1;i<n;i++){
//     diff = v[i] - v[i-1];
//     if(diff == 0){
//         freq++;
//         max_height = v[i]  + freq;
//     }
//     else{
//         freq = 0;
//         max_height = v[i] + freq;
//     }
//     ans = max(max_height,ans);
// }
// // ans = max(max_height,ans);
// cout<<ans<<endl;
    }
}