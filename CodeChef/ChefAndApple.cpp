#include<bits/stdc++.h>
using namespace std;

int omkar(int n,vector<int>&v){
//    map<int,int>m;
//     for(int i=n-1;i>=0;i--){
//         m[v[i]]++;
//     }
//     int time = 1;
//     int ans = 0;
//     int val = 0;
//     //while(n--){
//         for(auto i : m){
//             if(i.second > 1){
//                 val = i.first;
//                 val -= 1;
//                 time++;
//                 // if((*i).first == *(i+1).first){
//                 //     *i.second += *(i+1).second;
//                 // }0
//             }
//             if(i.second == n){
//             ans = time;
//             break;
//         }
//     }
//   //  }
//     return ans;

    //-------------------------------------
    sort(v.begin(),v.end());
    vector<int>freq(n,0);
    int time = 1;
    int ans = 0;
    while(n--){
        for(int i=n-1;i>=0;i--){
            freq[v[i]]++;
        }
        for(int i=n-1;i>=0;i--){
            if(freq[i] > 1){
                v[i] -= 1;
                time++;
            }
            if(freq[i] > 1){
                ans = time;
                break;
            }
        }
    }
    // if(freq[0] > 1){
    //     ans = time;
    // }
   return ans;

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
    //omkar(n,v);
    cout<<omkar(n,v)<<endl;
    }
    return 0;
}