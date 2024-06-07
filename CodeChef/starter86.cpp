// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	// your code goes here
// 	int t;cin>>t;
// 	while(t--){
// 	    int n;cin>>n;
//         string v;cin>>v;
//         map<char,int>m;
//         for(int i=0;i<n;i++){
//             m[v[i]]++;
//         }
//        for( auto i : m )
// {
//         one = i.second;

// }        if(m.size() == 1){
//             cout<<"ramos"<<endl;
//         }
//         else{
//             cout<<"zlatan"<<endl;
//         }
//         // if(n == 1){
//         //     cout<<"ramos"<<endl;
//         // }
//         // else{
//         // for(int i=0;i<n-1;i++){
//         //     if(v[i] == v[i+1]){
//         //         cout<<"ramos"<<endl;
//         //         break;
//         //     }
//         //     else{
//         //         cout<<"zlatan"<<endl;
//         //     }
//         // }
//         // }
// 	}
	    
// 	return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int main(){
    int q;cin>>q;
    while(q--){
        int n;cin>>n;
        string s;cin>>s;
        string t;cin>>t;
        string u;cin>>u;
        
        int index1 = 0;
        int index2 = 0;
        int diff = 0;
        int indu1 = 0;
        int indu2 = 0;
        int indu3 = 0;
        
        vector<char>v={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
        
        for(int i=0;i<26;i++){
            if(v[i] == s[0]){
                index1 = i;
            }
            if(v[i] == t[0]){
                index2 = i;
            }
            if(u[0] == v[i]){
                indu1 = i;
            }
            // if(u[1] == v[i]){
            //     indu2 = i;
            // }
            // if(u[2] == v[i]){
            //     indu3 = i;
            // }
        }
        diff = index2 - index1;
        
        vector<int>a;
        
        string ans = "";
        
        for(int i=0;i<26;i++){
            for(int j=0;j<n;j++){
                if(v[i] == u[j]){
                    a.push_back(i);
                }
            }
        }
        
        for(int i=0;i<n;i++){
            a[i] += diff;
        }
        
        if( a[0] > 25){
            for(int i=0;i<n;i++){
            a[i] += diff-26;
            ans.push_back(v[a[i]]);
        }
        
        }
        else{
            for(int i=0;i<26;i++){
                ans.push_back(v[a[i]]);
            }
        }
        
        cout<<ans<<endl;
    }
}