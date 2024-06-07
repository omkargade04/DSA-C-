#include<bits/stdc++.h>
using namespace std;
// int main(){
//     int t;cin>>t;
//     while(t--){
//         long long x,y;
//         cin>>x>>y;

//         long long X = x*x*x*x;
//         long long X2 = x*x;
//         long long Y = y*y*y*y;
//         long long Y2 = y*y;
//          if(X + 4*Y2 == 4*X2*y){
//             cout<<"yes"<<endl;
//          }
//          else{
//             cout<<"no"<<endl;
//          }

//     }
// }

int main(){
    int t;cin>>t;
    while(t--){
        int x;cin>>x;
        int ans = -1;
        vector<int>v;
        v.push_back(x-1);
        v.push_back(1);
        v.push_back(1);
        if(x == 1){
            cout<<ans<<endl;
        }
        else{
            for(int i=0;i<3;i++){
                cout<<v[i]<<" ";
            }cout<<endl;
        }

    }
}