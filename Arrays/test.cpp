#include<bits/stdc++.h>
using namespace std;

//[1,3,-2,24,5,-6]
/*
[-6,-2,-1,-3,-5,-24]

no. of pairs = 15
no. of 4 integers = 
*/

int func(vector<int> &v) {
    int n = v.size();

    int cnt = 0;

    int neg = 0;

    for(auto i: v) {
        if(i > 0) cnt++;
        else neg++;
    }

    /*
    (-6,-1,-2) 3 pairs
    (-6,-1,-2,-4) 6 pairs
    (-6,-1,-2,-4,-5) 10 pairs
    */

    // int temp = neg/2;
    int temp = 6;
    cnt += temp;

    int ans = pow(2, cnt);

    return ans;
}

int main() {
    // int n;cin>>n;
    vector<int> v={1,3,-2,24,5};

    int ans = func(v);

    cout << ans << endl;
}