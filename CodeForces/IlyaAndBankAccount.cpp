#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    string s = to_string(n);
    int a = s.size();

    int negativeCount = 0;
    int index = 0;
    for(int i=0;i<s.size();i++){
        if(s[i] < '0'){
            negativeCount++;
        }
    }
    if(negativeCount == 0){
        cout<<s<<endl;
    }
    else{
        if(s[a-1] > s[a-2]){
            s.erase(s.end()-1);
            cout<<s<<endl;
        }
        else{

            s.erase(s.end()-2);
            if(s[1]=='0'){
                cout<<'0'<<endl;
            }
            else{
                cout<<s<<endl;
            }
        }
    }

}