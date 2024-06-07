#include<iostream>
#include<vector>
using namespace std;

void omkar(int n,vector<int>&v){
    if(n==1){
        if(v[0] != 0){
            cout<<-1<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
    else if(n == 2){
        if(v[0] != v[1]){
            cout<<1<<endl;
        }
        else{
            if(v[0] != 0){
                cout<<-1<<endl;
            }
            else{
                cout<<0<<endl;
            }
        }
    }
    else{
        int x = v[0];
        int cnt = 0;
        for(int i=0;i<n;i++){
            if(x == v[i]){
                cnt++;
            }
        }
        if(cnt == n){
            cout<<0<<endl;
        }
        else{
            n = n/2;
            n += 1;
            cout<<n<<endl;
        }
    }
}
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++){
            int e;cin>>e;
            v.push_back(e);
        }

        omkar(n,v);
    
    }
    return 0;
}