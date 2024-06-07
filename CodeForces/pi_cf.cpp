// #include<iostream>
// #include<vector>
// #include<algorithm>
// #include<cmath>
// #define ll long long
// using namespace std;

// void omkar(int n,int s,int r){
//     vector<int>v;
//     s -= r;
//     v.push_back(s);
//     for(int i=2;i<=n;i++){
//         while(r-s < n-i){
//             s--;
//         }
//         v.push_back(s);
//         r -= s;
//     }
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }cout<<endl;

// }
#include <bits/stdc++.h>

using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	    int n;cin>>n;
	    int b[n];
	    for(int i=0;i<n;i++){
	        cin>>b[i];
	    }
	    vector<int>a;
	    for(int i=0;i<n;i++){
	        int e = pow(2,i);
	        a.push_back(e);
	    }
	    vector<int>c;
	    for(int i=0;i<n;i++){
	        int e = b[i]*a[i];
	        c.push_back(e);
	    }
	    sort(c.begin(),c.end());
	    
	    int p = 0;
	    int q = 0;
	    
	    for(int i=0;i<n;i++){
	        if(c[i] < 0){
	            q++;
	        }
	        else{
	            p++;
	        }
	    }
	   
	    int ans = abs(p-q);
	    cout<<ans<<endl;
	    
	}
	return 0;
}