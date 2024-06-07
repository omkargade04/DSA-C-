#include<bits/stdc++.h>
using namespace std;

// BLANK SPACE----------------------
// void omkar(vector<int>&v,int n){
//     int zero_cnt = 0;
//     int max_zero_cnt = 0;
//     v.push_back(1);

//     for(int i=0;i<=n;i++){
//         if(v[i] == 0){
//             zero_cnt++;
//         }
//         else{
//             max_zero_cnt = max(max_zero_cnt,zero_cnt);
//             zero_cnt = 0;
//         }
//     }
//     if(zero_cnt == n){
//         cout<<zero_cnt<<endl;
//     }
//     else{
//         cout<<max_zero_cnt<<endl;
//     }
// }
//----------------------------------

int omkar(int n,vector<int> &m,vector<string> &s){
    int time1 = INT_MAX;
    int time2 = INT_MAX;
    int time3 = INT_MAX;
    int mn_time = INT_MAX;

    if(n==1){
        cout<<m[0]<<endl;
         return 0;
    }
    
    for(int i=0;i<n;i++){
        if(s[i] == "11"){
            time3 = min(time3,m[i]);
        }
        else{
            if(s[i] == "10"){
                time1 = min(time1,m[i]);
            }
            else{
                if(s[i] == "01"){
                    time2 = min(time2,m[i]);
                }
            }
        }
    }
    if(time1 != INT_MAX && time2 != INT_MAX){
        mn_time = time1 + time2;
    }
    else{
        if(time3 )
            if((time1+time2) > time3)
                mn_time = time3;
    }
    if(mn_time == INT_MAX){
        cout<<-1<<endl;
    }
    else{
        cout<<mn_time<<endl;
    }
   
    return 0;
    
}
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> m(n);
        vector<string> s(n);
        for(int i=0;i<n;i++){
            cin>>m[i];
            cin>>s[i];
        }
        
        
        omkar(n,m,s);
    }
    return 0;
}

// if(s[0] == 0 && s[1] == 1 || s[0] == 1 && s[1] == 0){
    //     mn_time = time1 + time2;
    //     cout<<mn_time<<endl;
    // }
    // else{
    //     cout<<time1<<endl;
    // }





    //-----------------------------------
     // if(mn_time == INT_MAX && time3 == INT_MAX){
    //     cout<<-1<<endl;
    //     return 0;
    // }
    // else if((time1 == INT_MAX || time2 == INT_MAX) && time3 == INT_MAX ){
    //     cout<<-1<<endl;
    //     return 0;
    // }
    // else if(mn_time < time3){
    //     cout<<mn_time<<endl;
    //     return 0;
    // }
    // else if(mn_time > time3 && time3 != INT_MAX){
    //     if(time3 == INT_MAX ){
    //         cout<<-1<<endl;
    //         return 0;
    //     }
    //     else{
    //         cout<<time3<<endl;
    //         return 0;
    //     }
    // }
    //-----------------------------------------------