#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr1[] ={1,2,3,4,6};
    // int n = 5;
    // int x = 30;
    // int i = 0 ;
    // int j = 1;
    //  while(i<n and j<n){
    //     if(abs(arr1[i] - arr1[j]) < x){
    //         j++;
    //     }
    //     else if(abs(arr1[i] - arr1[j]) > x){
    //         i++;
    //     }
    //     else if(abs(arr1[i] - arr1[j]) == x){
    //         cout<<"YES";
    //         break;
    //     }
    //     else if(abs(arr1[i] - arr1[j]) != x){
    //         cout<<"NO";
    //         break;
    //     }

    //  }
    int n = 5;

    int result[n];
    int x = 7;
    
    int i = 0;
    int j = n - 1;
    //int k = n-1;

    // while(i <= j and k >= 0){
    //     if(abs(arr1[i]) > abs(arr1[j])){
    //         result[k] = arr1[i]*arr1[i];
    //         i++;
    //         k--;
    //     }
    //     else{
    //         result[k] = arr1[j]*arr1[j];
    //         j--;
    //         k--;
    //     }

       
    // }
    //  for(int i = 0 ; i < n ;i++){
    //         cout<<result[i]<<" ";
    //     }
    int count = 0;

    while(i<j){
        if(arr1[i] + arr1[j] == x){
            count++;
            i++;
            j--;
        }
        else if(arr1[i] + arr1[j] < x){
            i++;
        }
         else if(arr1[i] + arr1[j] > x){
            j--;
        }
    }
    cout<<"No. of pairs : "<<count<<endl;
    return 0;
    
}