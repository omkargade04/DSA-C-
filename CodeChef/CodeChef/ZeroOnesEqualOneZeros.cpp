#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	    int n;cin>>n;
	    int index = n/2;
	    vector<int>freq(n,0);
	   // for(int i=0;i<n;i++){
	        if(n%2==0){
	            freq[index] = 1;
	            freq[index-1] = 1;
	        }
	        else{
	            freq[index] = 1;
	        }
	    //}
	    for(int i=0;i<n;i++){
	        cout<<freq[i];
	    }cout<<endl;
	}
	return 0;
}