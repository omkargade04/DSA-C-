#include<bits/stdc++.h>
using namespace std;

// void spiralOrder(vector<vector<int>>&mat){
//     int left = 0;
//     int right = mat[0].size() - 1;
//     int top = 0;
//     int bottom = mat.size() - 1;
//     int direction = 0;

//     while(left <= right && top <= bottom){
//         if ( direction == 0 ){
//             for(int i = left ; i <= right ; i++){
//                 cout<<mat[top][i]<<" ";
//             }
//             top++;
//         }

//         else if ( direction == 1 ){
//             for(int i = top ; i <= bottom ; i++){
//                 cout<<mat[i][right]<<" ";
//             }
//             right--;
//         }

//         else if ( direction == 2 ){
//             for(int i = right ; i >= left ; i--){
//                 cout<<mat[bottom][i]<<" ";
//             }
//             bottom--;
//         }
//         else{
//             for(int i = bottom ; i >= top ; i-- ){
//                 cout<<mat[i][left]<<" ";
//             }
//             left++;
//         }
//         direction = (direction+1) % 4;
//     }
// }

// int main(){
//     int n,m;
//     cin>>n>>m;

//     vector<vector<int>>mat(n,vector<int> (m));

//     for(int i = 0 ; i < n ; i++){
//         for(int j = 0 ; j < m ; j++){
//             cin>>mat[i][j];
//         }
//     }
//     spiralOrder(mat);

//     return 0;
// }

// Spiral Matrix

vector<vector<int>> spiralMatrix(int n){

    vector<vector<int>>mat(n,vector<int> (n));

    int left = 0;
    int right = n - 1;
    int top = 0;
    int bottom = n - 1;
    int direction = 0;

    int value = 1;

    while(left <= right && top <= bottom){
        if ( direction == 0 ){
            for(int i = left ; i <= right ; i++){
                mat[top][i] = value++;
            }
            top++;
        }

        else if ( direction == 1 ){
            for(int i = top ; i <= bottom ; i++){
                mat[i][right] = value++;
            }
            right--;
        }

        else if ( direction == 2 ){
            for(int i = right ; i >= left ; i--){
                mat[bottom][i] = value++;
            }
            bottom--;
        }
        else{
            for(int i = bottom ; i >= top ; i-- ){
                mat[i][left] = value++;
            }
            left++;
        }
        direction = (direction+1) % 4;
    }
    return mat;
}

int main(){
    int n;
    cin>>n;

    vector<vector<int>>mat(n,vector<int> (n));

    // for(int i = 0 ; i < n ; i++){
    //     for(int j = 0 ; j < n ; j++){
    //         cin>>mat[i][j];
    //     }
    // }
    mat = spiralMatrix(n);
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cout<<mat[i][j]<<" ";
        }cout<<endl;
    }
    return 0;
}