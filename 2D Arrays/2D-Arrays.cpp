#include<bits/stdc++.h>
using namespace std;



    // int n,m;//n - no. of rows , m - no. of columns
    // cin>>n>>m;
    // int arr[n][m];
    // for(int i = 0 ; i < n ; i++){
    //     for(int j = 0 ; j < m ; j++){
    //         cin>>arr[i][j];
    //         cout<<arr[i][j]<<" ";
    //     }cout<<endl;
    // }
//***************Multiplication Matrices**************************************
    // int r1,c1;
    // cin>>r1>>c1;

    // int A[r1][c1];
    // for(int i = 0 ; i < r1 ; i++){
    //     for(int j = 0 ; j < c1 ; j++){
    //         cin>>A[i][j];
    //     }
    // }

    // int r2,c2;
    // cin>>r2>>c2;

    // int B[r2][c2];
    // for(int i = 0 ; i < r2 ; i++){
    //     for(int j = 0 ; j < c2 ; j++){
    //         cin>>B[i][j];
    //     }
    // }

    // if(c1 != r2){
    //     cout<<"Invalid input"<<endl;
    // }

    // int C[r1][c2];
    // for(int i = 0 ; i < r1 ; i++){
    //     for(int j = 0 ; j < c2 ; j++){
    //         int value = 0;
    //         for(int k = 0 ; k < c1 ; k++){
    //             value += A[i][k] * B[k][j];
    //         }
    //         C[i][j] = value;
    //         cout<<C[i][j]<<" ";
    //     }cout<<endl;
    // }
//***************************Transpose Matrix***************************

// int n,m;
// cin>>n>>m;

// int array[n][m];
// for(int i = 0 ; i < n ; i++){
//     for(int j = 0 ; j < m ; j++){
//         cin>>array[i][j];
//     }
// }

// int transposeArray[m][n];
// for(int i = 0 ; i < m ; i++){
//     for(int j = 0 ; j < n ; j++){
//         transposeArray[i][j] = array[j][i];
//         cout<<transposeArray[i][j]<<" ";
//     }cout<<endl;
// }

// ***************************************************************************************************

/*
QUESTIONS ON 2D - ARRAY BELOW 

*/
//***************************************************************************************************
// int m,n;
// cin>>m>>n;
// //My Method
// int array[m][n];
// for(int i = 0 ; i < m ; i++){
//     for(int j = 0 ; j < n ;j ++){
//         cin>>array[i][j];
//         cout<<array[i][j]<<" ";
//     }cout<<endl;
//  }
// //  for(int i = m-1 ; i >= 0 ; i--){
// //     for(int j = n-1 ; j >= 0 ; j--){
// //         if(array[i][j] > array[i-1][j-1]){
// //             cout<<array[i][j];
// //             break;
// //         }
// //     }cout<<endl;
// // }
// //--------------------------------------------------------
// //2nd Method
// int val = INT_MIN;
// for(int i = 0 ; i < m ; i++){
//     for(int j = 0 ; j < n; j++){
//         if(array[i][j] > val){
//             val = array[i][j];
//         }
//     }//cout<<endl;
// }
// cout<<val;
// return 0;

//***************************************************************************************
//  Question 2
// int m,n;
// cin>>m>>n;

// // //Original Array
//  int arr[m][n];
// for(int i = 0 ; i < m ; i++){
//     for(int j = 0 ; j < n ; j++){
//         cin>>arr[i][j];
//         cout<<arr[i][j]<<" ";
//     }cout<<endl;
// }
// cout<<endl;
// // //Transpose Array
//  int transArr[n][m];
// for(int i = 0 ; i < n ; i++){
//     for(int j = 0 ; j < m ; j ++){
//         transArr[i][j] = arr[j][i];
//         cout<<transArr[i][j]<<" ";
//     }cout<<endl;
// }
// cout<<endl;
// //Answer Array
// int ansArr[n][m];
// for(int i = 0 ; i < n ; i++){
//     for(int j = 0 ; j < m ; j++){
//         swap(transArr[i][0],transArr[i][2]);
//         cout<<transArr[i][j]<<" ";
//     }cout<<endl;
// }



//PW METHOD********************************************


// for(int i=0;i<n;i++)
// {
// for(int j=0;j<i;j++)
// {
// swap(mat[i][j],mat[j][i]);
// }
// }
// //swap diagonal elements
// for(int i=0;i<n;i++)
// {
// for(int j=0;j<n/2;j++)
// {
// swap(mat[i][j],mat[i][n-j-1]);
// }
// }
// cout<<endl;
// //printing the mat
// for(int i=0;i<n;i++)
// {
// for(int j=0;j<n;j++)
// {
// cout<<mat[i][j]<<" ";
// }
// cout<<endl;
// }

//------------------------------------------------------------------------

// ADVANCED PROBLEM ON 2D Arrays

// int peace(vector<vector<int>>&mat,int m,int n){
//     int count1 = 0;
//     int count2 = 0;
//     int count3 = 0;
//     int firstRow = 0;
//     int secondRow = 0;
//     int thirdRow = 0;

//     for(int i = 0 ; i < m ; i++){
//         for(int j = 0 ; j < n ; j++){
//             if(mat[i][j] == 1){
//                 count1++;
//                 firstRow = i;
//             }
//         }
//         break;
//     }

//     for(int i = 1 ; i < m ; i++){
//         for(int j = 0 ; j < n ; j++){
//             if(mat[i][j] == 1){
//                 count2++;
//                 secondRow = i;
//             }
//         }
//         break;
//     }

//      for(int i = 2 ; i < m ; i++){
//         for(int j = 0 ; j < n ; j++){
//             if(mat[i][j] == 1){
//                 count3++;
//                 thirdRow = i;
//             }
//         }
//         break;
//     }

//     if(count1 > count2 && count1 > count3){
//         return firstRow;
//     }
//     else if(count1 < count2 && count2 > count3){
//         return secondRow;
//     }
//     else if(count1 < count3 && count2 < count3){
//         return thirdRow;
//     }
// }

// int main(){
//     vector<vector<int>> mat={{0,1,1,1},{1,1,1,1},{0,0,0,1}};
//     cout<<peace(mat,3,4);

  //****Proper Method*****  

// }
// int onesRow(vector<vector<int>>&V){
//     int r = V.size();
//     int c = V[0].size();

//     int numberOfOnes = 0;
//     int maxOnes = INT_MIN;
//     int maxOnesRows = -1;

//     for(int i = 0 ; i < r ; i++){
//         for(int j = 0 ; j < V[i].size() ; j++){
//             if(V[i][j] == 1){
//                  numberOfOnes = c - j ; 
//                 if(numberOfOnes > maxOnes){
//                     maxOnes = numberOfOnes;
//                     maxOnesRows = i;
//                 }
//                 break;
//             }
//         }
//     }

//     return maxOnesRows;
// }

// int main(){
//     int n,m;
//     cin>>n>>m;

//     vector<vector<int>>v(n,vector<int>(m));

//     for(int i = 0 ; i < n ; i++){
//         for(int j = 0 ; j < m ; j++){
//             cin>>v[i][j];
//         }
//     }

//     int ans = onesRow(v);
//     cout<<ans<<endl;

//     return 0;
// }
//------------------------------------------------------------------

// ROTATE MATRIX BY 90 Degree


void rotateMatrix(vector<vector<int>>&V){
    int n = V.size();

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < i ; j++){
            swap(V[i][j],V[j][i]);
        }
    }

    for(int i = 0 ; i < n ; i++){
        reverse(V[i].begin(),V[i].end());
    }
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cout<<(V[i][j])<<" ";
        }cout<<endl;
    }

    return ;
}

int main(){
    int n;
    cin>>n;

    vector<vector<int>>v(n,vector<int>(n));

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cin>>v[i][j];
        }
    }
     for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cout<<v[i][j]<<" ";
        }cout<<endl;
    }
    cout<<endl;

    rotateMatrix(v);
    

    return 0;
}