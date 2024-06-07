/*Repeatedly take elements from unsorted subarray and insert it into sorted subarray*/


#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int e;cin>>e;
        v.push_back(e);
    }
    for(int i=1;i<n;i++){
        int current = v[i];
        int j = i-1;
        while(j>=0 and v[j] > current){
            //find correct position for element
            v[j+1] = v[j]; 
            j--;
        }
        //insert the current position
        v[j+1] = current;
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }cout<<endl;
}

//---------------------------------
//Striver's Method

void insertion_sort(){
    int n;cin>>n;
    int a[n];

    for(int i=0;i<n;i++){
        int j = i;
        while(j > 0 && a[j-1] > a[j]){
                swap(a[j-1],a[j]);
                j--;
        }
    }
}