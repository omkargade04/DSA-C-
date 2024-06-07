#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	    int n;cin>>n;
	    vector<int>v1;
	    vector<int>v2;
	    for(int i=0;i<n;i++){
	        int e;cin>>e;
	        v1.push_back(e);
	    }
	    for(int i=0;i<n;i++){
	        int e;cin>>e;
	        v2.push_back(e);
	    }
	    int ones_cnt = 0;
	    int zeros_cnt = 0;
	    if(v1[0] == 0){
	        for(int i=1;i<n;i++){
	            if(v2[i] == 1){
	                if(v1[i] == 0){
	                    v1[i] = 2;
	                }
	            }
	        }
	    }
	    else{
	        for(int i=0;i<n;i++){
	            if(v2[i] == 1){
	                if(v1[i] == 0){
	                    v1[i] = 2;
	                }
	            }
	        }
	    }

        cout<<"Array"<<endl;
        for(int i = 0;i<n;i++){
            cout<<v1[i];
        }cout<<endl;


	    if(v1[0] == 0){

            v1[0]  = 2;

            cout<<"Array 2"<<endl;
        for(int i = 0;i<n;i++){
            cout<<v1[i];
        }cout<<endl;


	    for(int i=0;i<v1.size();i++){
	           if(v1[i] == 1){
	               ones_cnt++;
	           }
	           else{
	               zeros_cnt++;
	           }
	       }
	    }
	    else{
	        for(int i=0;i<n;i++){
	           if(v1[i] == 1){
	               ones_cnt++;
	           }
	           else{
	               zeros_cnt++;
	           }
	       }
	    }

        cout<<ones_cnt<<endl;
        cout<<zeros_cnt<<endl;

	    int diff = 0;
	    if(ones_cnt >= zeros_cnt){
	        cout<<ones_cnt + zeros_cnt<<endl;
	    }
	    else{
	        cout<<2*ones_cnt<<endl;
	    }
	}
	return 0;
}