#include<bits/stdc++.h>
using namespace std;

// int removeOne(vector<int>&v,int N,int L,int S){
//     for(int i = 0 ; i < N ; i++){
//         cin>>v[i];
//     }
// }
// int main(){
//     vector<int>v;
//     int n ; cin>>n;
//     for(int i = 0 ; i < n ; i++){
//         int ele;cin>>ele;
//         v.push_back(ele);
//         cout<<v[i]<<" ";
//     }cout<<endl;

//     // 1,2,3,4,5
//     v.pop_back();
//     int sum = 0;
//     int S;cin>>S;
//     for(int i = 0 ; i < n ; i++){
//             sum += v[i];
//     }
//     if(sum == S){
//         cout<<"YES"<<endl;
//     }
//     else{
//         cout<<"NO"<<endl;
//     }
// }
// 2nd Method
int main() {
	int t;cin>>t;
    while(t--){
        int N;cin>>N;
        int arr[N] = {1,2,3,4,5};
        
        int L;cin>>L;
        int sum = 0;
        for(int i = 0 ; i < L ; i++){
            for(int j = i+1 ; j < L ; j++){
                for(int k = j+1 ; k < L ;k++){
                    sum = arr[i] + arr[j] + arr[k];
                }
            }
        
        }
        int S;cin>>S;
        if(sum == S){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}

//***************************************

// int main() {
// 	int a1;
//     int a2;
//     int a3;
//     cin>>a1>>a2>>a3;
//     vector<int>v;
//     v.push_back(a3);
//     v.push_back(a2);
//     v.push_back(a1);
//     int sum = 0;
//      for(int i = 0; i < 3 ; i++){
//          sum = v[i] + v[i+1];
//     }
//     if(sum%2 == 0 && sum>0 ){
//         cout<<"YES"<<endl;    
//         }
//     else{
//         cout<<"NO"<<endl;
//     }    
//     return 0;
// }