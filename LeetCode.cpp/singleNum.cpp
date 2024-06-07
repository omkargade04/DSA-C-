#include<bits/stdc++.h>
using namespace std;

int singleNumber(vector<int>& v) {
        vector<unsigned int> repArr;
        unsigned int k = 0;
        unsigned int ans = 0;
        for(int i = 0 ; i < v.size() ; i++){
            for(int j = i + 1 ; j < v.size() ; j++){
                if(v[i] == v[j]){
                    // repArr.push_back(v[i]);
                    // repArr.push_back(v[j]);
                    repArr[k++] = v[i];
                    repArr[k++] = v[j];

                    
                }
            }
            ans = v[i];
           
        }
        
       
      return ans;
    }
    int main(){
        vector<int>v;
        int n;cin>>n;
          for(int i = 0 ; i < n ; i++){
            int ele;cin>>ele;
            v.push_back(ele);
            cout<<v[i]<<" ";
          }cout<<endl;
          int ans1 = singleNumber(v);
          cout<<ans1<<endl;
    }