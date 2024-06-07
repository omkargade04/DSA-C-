#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string s;cin>>s;
        string x = "" ;
        x[0] = '1';
        string y  = "";
        y[0] = '0';
        int count1 = 0;
        int count2 = 0;
        for(int i=1;i<n-1;i++){
            if(x[0] == '1'){
                x[i] += s[i]^x[i];
            }
            if(y[0] == '0'){
                y[i] += s[i-1]^y[i-1];
            }
        }
        // cout<<x<<endl;
        // cout<<y<<endl;

        for(int i=0;i<n;i++){
            if(x[i] == '1'){
                count1++;
            }
            if(y[i] == '1'){
                count2++;
            }
        }
        if(count1 > count2){
            cout<<count1 + 1<<endl;
        }
        else{
            cout<<count2 + 1<<endl;
        }



        // vector<int>v;
        // for(int i=0;i<n;i++){
        //    v.push_back(s[i]-'0');
        //    //v[i] = s[i] - '0';
        // }
        // reverse(v.begin(),v.end());
        // for(int i=0;i<n;i++){
        //     cout<<v[i];
        // }cout<<endl;

        // for(int i=n-1;i>=0;i--){
        //     if(v[i]==0){
        //         v[i]=1;
        //         break;
        //     }
        //     else{
        //         break;
        //     }
        // }
        // cout<<"After swapping 1"<<endl;
        // for(int i=0;i<n;i++){
        //     cout<<v[i];
        // }cout<<endl;
        
        // //int size = k-1;
        // int new_size = n + k ;
    
        // vector<int>zero(k-1,0);
        // for(int i=0;i<new_size;i++){
        //     zero.push_back(v[i]);
        // }
        // cout<<"Pen-Ultimate Array"<<endl;

        // for(int i=0;i<new_size;i++){
        //     cout<<zero[i];
        // }cout<<endl;

        // reverse(zero.begin(),zero.end());
        // // int sum = 0;
        // // for(int i=0;i<n;i++){
        // //     sum += zero[i] * pow(2,i);
        // // }
        

        // cout<<"Ultimate Array"<<endl;
        // for(int i=0;i<new_size;i++){
        //         cout<<zero[i];
        //     }

    }
    return 0;
}