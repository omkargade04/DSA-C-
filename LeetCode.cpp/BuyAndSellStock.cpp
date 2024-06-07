#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices) {
    //To find the minimum value
    int val1 = INT_MAX;
    //To find the maximum value
    int val2 = INT_MIN;
    int ans = 0;
    int minIndex = 0;
    int maxIndex = 0;
    int profit = 0;
    for(int i = 0 ; i < prices.size() ; i++){
        if(prices[i] < val1){
            val1 = prices[i];
            minIndex = i;
        }
    }
    for(int j = minIndex ; j < prices.size() ; j++){
        if(prices[j] > val2){
            val2 = prices[j];
            maxIndex = j;
        }
    }
    int sub = 0;
    for(int k = 0 ; k < prices.size() ; k++){
        sub = prices[k+1] - prices[k];
        break;
    }
    profit = val2 - val1;
    if(minIndex > maxIndex){
        return ans;
    }
    else if(true){
        return subs;
    }
    else{
        return profit;
    }
} 


int main(){
    int n;cin>>n;
    vector<int>v;

    for(int i = 0 ; i < n ; i++){
        int ele;cin>>ele;
        v.push_back(ele);
        cout<<v[i]<<" ";
    }cout<<endl;

    maxProfit(v);
}