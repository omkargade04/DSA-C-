#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	    int n;cin>>n;
	    vector<int>v;
	    
	    for(int i=0;i<n;i++){
	        int e;cin>>e;
	        v.push_back(e);
	    }
	    vector<int>ans;
	
	    int count = 1;
	    
	     if(n==1){
	         ans.push_back(1);
	         ans.push_back(1);
	        
            cout<<ans[0]<<" "<<ans[1]<<endl;
	     }
        else
        {
            ans = {};
            for(int i=0;i<n-1;i++)
            {
                int diff = v[i+1] - v[i];
                if(diff < 3)
                    count++;
                else 
                {
                    ans.push_back(count);
                    count=1;
                }
            } 
            ans.push_back(count);
            int min = *min_element(ans.begin(), ans.end());
            int max = *max_element(ans.begin(),ans.end());
            
            cout<<min<<" "<<max<<endl;
            
        }
	}
	return 0;
}