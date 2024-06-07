#include<bits/stdc++.h>
using namespace std;

//QUESTION 1

// int main(){
//     int x;cin>>x;
//     int *p = &x;
//     cout<<p<<endl;
// }
//---------------------------------------------
// QUESTION 2

// int product(int *x,int *y){
//     int  ans ;
//     ans = *x * *y;
//     return ans;
// }
// int main(){
//     int x;cin>>x;
//     int y;cin>>y;

//     int *p1 = &x;
//     int *p2 = &y;

//     int answer = product(p1,p2);
//     cout<<answer<<endl;

//     return 0;
// }
//------------------------------------------------

// ASSIGNEMENT 2


//QUESTION 1
// int main(){
//     int n;cin>>n;
//     int k;cin>>k;

//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     int *p = &a[k-1];
//     cout<<*p<<endl;
     
//      return 0;
// }
//-------------------------------------------------
//question 2

int main(){
    int n;cin>>n;
    //int k;cin>>k;

    int a[n];
    int *p = a;
    for(int i=0;i<n;i++){
        cin>>a[i];
        //p++;
    }
    //p = a;
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += *p;
        p++;
    }
    cout<<sum<<endl;
}