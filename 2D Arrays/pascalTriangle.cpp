#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>pascalTriangle(int n){
    vector<vector<int>>pascal(n);

    for(int i = 0 ; i < n ; i++){
        pascal[i].resize(i+1);
    }

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < i+1 ; j++){
            if(j == 0 || j == i){
                pascal[i][j] = 1;
            }
            else{
                pascal[i][j] = pascal[i-1][j] + pascal[i-1][j-1];
            }
        }
    }
    return pascal;
}

int main(){

    int n;cin>>n;

    vector<vector<int>>ans;
    ans = pascalTriangle(n);

    for(int i = 0 ; i < ans.size() ; i++){
        for(int j = 0 ; j < ans[i].size() ; j++){
            cout<<ans[i][j]<<" ";
        }cout<<endl;
    }
    return 0;
}

//***********************************************************************************
/*
Perfect Matrix Question 
*/

// bool perfectMatrix(vector<vector<int>> &pascal){
//     int m = pascal.size();
//     int n = pascal[0].size();

//     for(int i = 0 ; i < m ; i++){
//         for(int j = 0 ; j < n ; j++){
//             if(pascal[i][j] == pascal[i+1][j+1]){
//                 return true ; 
//             }
//         }
//     }
//     return false;
// }
// int main(){
//     vector<vector<int>> mat={{9,8,7,6},{5,9,8,7},{1,5,9,8}};

//     if(perfectMatrix(mat)){
//         cout<<"True"<<endl;
//     }
//     else{
//         cout<<"False"<<endl;
//     }

//     return 0;
// }