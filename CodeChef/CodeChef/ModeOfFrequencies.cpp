#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	    int n;cin>>n;
	    vector<int> v;
	    for(int i=0;i<n;i++){
	        int e;cin>>e;
	        v.push_back(e);
	    }
	    map<int,int>m;
	    int ans = 0;
	    for(int i=0;i<n;i++){
	        m[v[i]]++;
	    }
	    // int mode = 0;
        // int even_count = 0;
        // int odd_count = 0;
        int mn = INT_MAX;
        int mx = INT_MIN;
        int freq = 0;
        map<int,int>m2;
        for(auto i : m){
            m2[i.second]++;
        }
        map<int,int> :: iterator i = m2.begin();
        //for(auto i : m2){
        while(i != m2.end()){
            if(freq < i->second ){
                freq = i->second;
                ans = i->first;

                // for(auto i : m){
                //     mn = min(mn,i.first);
                // }
                // cout<<mn<<endl;
                // break;
            }
            i++;
            // else{
            //     for(auto i : m){
            //         mx = max(mx,i.second);
            //     }
            //     cout<<mx<<endl;
            //     break;
            // }
        }
        cout<<ans<<endl;


	    // // for(auto i : m){
        // //     if(i.second % 2 == 0) even_count++;
        // //     else odd_count++;
        // // }
        // int mn = 0;
        
        // for(auto i : m){
	    //     mode = 0;
	    //     mode = max(mode,i.second);
        //     }
	    // }
	    // vector<int>ans;
	    // for(auto i : m){
	    //     if(i.second == mode){
	    //         ans.push_back(i.first);
	    //     }
	    // }
        // if(even_count != odd_count){
	    // cout<<*min_element(ans.begin(),ans.end())<<endl;
        // }
        // else{
        //     cout<<mn<<endl;
        // }
        // int mx=INT_MIN;
        // for(auto it:m){
        //     mx = max(mx, it.second);
        // }

        // cout<<mx<<endl;
	}
	return 0;
}
