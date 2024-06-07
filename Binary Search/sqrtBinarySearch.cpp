#include<iostream>
#include<vector>
using namespace std;

int omkar(int target){
    int lo = 1;
    int hi = target;
    int ans = -1;

    while(lo <= hi){
        int mid = lo + (hi - lo)/2;
        if(mid * mid <= target){
            ans = mid;
            lo = mid+1;
        }
        else{
            hi = mid-1;
        }
    }
    return ans;
}
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        cout<<omkar(n)<<endl;
    }
    return 0;
}
