#include<bits/stdc++.h>
using namespace std;

//Factorial of a Number
// int f(int n){
//     if(n==1) return 1;
//     int ans = n*f(n-1);
//     return ans;
// }
// int main(){
//     int n;cin>>n;
//     cout<<f(n)<<endl;
//     return 0;
// }

//Fibonacci Series
int fib(int n){
    if(n==0 || n==1) return n;
    int ans = fib(n-1) + fib(n-2);
    return ans;
}
int main(){
    int n;cin>>n;
    cout<<fib(n)<<endl;
    return 0;
}