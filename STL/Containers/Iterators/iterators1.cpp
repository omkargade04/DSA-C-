#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v = {1,2,3,4,5,6};
    // iterators are pointers like elements
    //they are defined by following method
    vector<int> :: iterator it = v.begin();
    //iterator starts iteration from v.begin() till v.end();
    //we need to dereference the iterator 'it' to display hte value
    for(it = v.begin() ; it != v.end() ; it++){
        cout<<*it<<endl;
    }
   // cout<<*(it+1)<<endl;

    vector<pair<int,int>>v_p = {{1,2},{3,4}};
    vector<pair<int,int>> :: iterator i;
    for(i = v_p.begin() ; i != v_p.end() ; i++){
        cout<<(*i).first<<" "<<(*i).second<<endl;
        cout<<i->first<<" "<<i->second<<endl;
    }
}

// FOR LOOP USING AUTO

int main(){
    vector<int>v = {1,2,3,4,5,6};
    for(auto i : v){
        cout<<v[i]<<" ";
    }cout<<endl;

    vector<pair<int,int>>v_p = {{1,2},{3,4}};
    for(auto i: v_p){
        cout<<v_p.first<<" "<<v_p.second<<endl;
    }cout<<endl;

    return 0;
}