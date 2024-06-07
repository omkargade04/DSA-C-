#include <bits/stdc++.h>
using namespace std;

#define N 10000
#define K 100
#define T 100
#define X 1000000000
#define Arr 100000

void init_code() {
#ifndef ONLINE_JUDGE
    freopen("input009.txt", "r", stdin);
    freopen("output009.txt", "w", stdout);
#endif // ONLINE_JUDGE
}



long long getNoOfWays(int n,vector<long long> &dp){
    if (n <= 2)
      return n;
      if(dp[n]!=-1)return dp[n];
    return dp[n]=(getNoOfWays(n - 1 , dp) + getNoOfWays(n - 2 ,dp))%1000000007;
}
long long factorial(int n){
    long long res = 1;
    for(int i=1; i<=n; i++){
        res*=i;
        res%=1000000007;
    }
    return res;
}


void solve(){
  int n; cin>>n;
  vector<long long> dp(n+1,-1);
  cout<<(factorial(n)*getNoOfWays(n,dp))%1000000007<<endl;
}


int main()
{
    init_code();
    srand(time(0));                   //IMPPPP....

    // long long int t = rand() % T + 1; //Generate a random number between 1 and T.
    // cout << t << endl;
    // // t = 1;
    // for (int tc = 0; tc < T; tc++)
    // {
    //     long long int n = (rand() % (N)) + 1; // 1 to N
    //     cout << n << '\n';

    // }


    int t;cin>>t;
    while(t--){
        solve();
    }

}