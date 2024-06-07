#include<bits/stdc++.h>
using namespace std;

int main(){
    pair<int,int>p;
    p = make_pair(2,4);
    cout<<p.first<<" "<<p.second<<endl;

    int a[] = {1,2,3};
    int b[] = {2,3,4};

    pair<int,int> p_arr[3];
    p_arr[0] = {1,2};
    p_arr[1] = {2,3};
    p_arr[2] = {3,4};

    for(int i=0;i<3;i++){
        cout<<p_arr[i].first<<" "<<p_arr[i].second<<endl;
    }cout<<endl;

    //  VECTOR OF PAIRS

    vector<pair<int,int>>v = {{1,2},{7,8}};
    int n;cin>>n;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        v[i].push_back({x,y});
    }
    for(int i=0;i<n;i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }

}