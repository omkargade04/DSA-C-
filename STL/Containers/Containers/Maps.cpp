#include<bits/stdc++.h>
using namespace std;


// ORDERED MAP

// int main(){
//     //Map is a key value pair
//     map<int,string>m;
//     m[1] = "abc";
//     m[5] = "cdc";
//     m[3] = "acd";
//     //m.insert({key,value});
//     m.insert({4,"afg"});
//     for(auto &i : m){
//         cout<<i.first<<" "<<i.second<<endl;
//     }cout<<endl;

//     //FIND Operator

//     auto it = m.find(5);
//     if(it == m.end()){
//         cout<<"Doesnt Exist"<<endl;
//     }
//     else{
//         cout<<(*it).first<<" "<<(*it).second<<endl;
//     }

//     //ERASE Operator

//     auto i = m.find(3);

//     if(it != m.end()){
//         cout<<m.erase(it)<<endl;
//     }
    
//     return 0;
// }

// QUESTION
/*
Display the string in lexography order with its frequencies
*/
// int main(){
//     int n;cin>>n;
//     map<string,int>m;
//     for(int i=0;i<n;i++){
//         string s;cin>>s;
//         m[s]++;
//     }
//     for(auto &i : m){
//         cout<<i.first<<" "<<i.second<<endl;
//     }

//     return 0;
// }
//---------------------------------------------------------------------

// UNORDERED MAP
/*
Difference between Orderded and Unodered Map
1. Inbuilt implementation
2. Time complexity
3. Valid Keys Datatypes
*/
int main(){
        int n;cin>>n;
    unordered_map<string,int>m;
    for(int i=0;i<n;i++){
        string s;cin>>s;
        m[s]++;
    }
    for(auto &i : m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    return 0;
}

