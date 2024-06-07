#include<bits/stdc++.h>
#define int long long int
using namespace std;

int eating(vector<int>&v,int hour){
    int totalH = 0;
    for(int i=0;i<v.size();i++){
        totalH += ceil(v[i] / hour);
    }

    return totalH;
}
int kokoEating(vector<int>&v,int k){
    
    int low = 1;
    int high = *max_element(v.begin(),v.end());

    while(low <= high){
        int mid = (low+high)/2;
        int totalH = eating(v,mid);

        if(totalH <= k){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }

    return low;
}

int32_t main(){
    int n;cin>>n;
    int k;cin>>k;
    vector<int>v;
    for(int i=0;i<n;i++){
        int e;cin>>e;
        v.push_back(e);
    }

    int ans = kokoEating(v,k);
    cout<<ans<<endl;

    return 0;
}