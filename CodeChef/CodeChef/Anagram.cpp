#include<bits/stdc++.h>
using namespace std;

string sortString(string &str){

    vector<int>freq(26,0);

    for(int i=0;i<str.length();i++){
        int index = str[i] - 'a';
        freq[index]++;
    }

    int j=0;
    for(int i=0;i<26;i++){
        while(freq[i]--){
            str[j] = i + 'a';
            j++;
        }
    }

    return str;
}

int main(){
    string s,t;
    cin>>s>>t;

    cout<<sortString(s)<<"\n";
    cout<<sortString(t)<<"\n";

    cout<<s<<endl;
    cout<<t<<endl;

    if(s == t){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
}