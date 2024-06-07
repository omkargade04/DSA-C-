#include <bits/stdc++.h>
using namespace std;

/*
Q.1)
N -> integers
every inetger appears twice
two integers appear once
print the integers appearing once.
*/

// int main()
// {
//     int a[10] = {1, 1, 2, 5, 3, 2, 3, 4, 7, 4};

//     int x = 0;
//     for (int i = 0; i < 10; i++)
//     {
//         x = x xor a[i];
//     }
//     int cnt = 0;
//     while (x)
//     {
//         if (x & 1)
//         {
//             break;
//         }
//         else
//         {
//             cnt++;
//             x = x >> 1;
//         }
//     }
//     int x1 = 0;
//     int x2 = 0;

//     for (int i = 0; i < 10; ++i)
//     {
//         if (a[i] & (1 << cnt))
//         {
//             x1 = x1 xor a[i];
//         }
//         else
//         {
//             x2 = x2 xor a[i];
//         }
//     }
//     cout << x1 << " " << x2;
// }

//------------------------------------------------

/*
Q.2)
To create a subset of an array
*/
// int main()
// {
//     int a[3] = {1, 2, 3};
//     vector<int> v;
//     vector<vector<int>>V;

//     int n = 3;
//     for (int num = 0; num < (1 << n); num++)
//     {
//         for (int bit = 0; bit < n; bit++)
//         {
//             if ( num & (1 << bit) != 0){
//                 v.push_back(a[bit]);
//             }
//             V.push_back(v);
//         }
//     }
//     for (const vector<int>& v : V) {
//         cout << "{ ";
//         for (int element : v) {
//             cout << element << " ";
//         }
//         cout << "}\n";
//     }
// }



// void generatePowerSet(const vector<int>& set, vector<vector<int>>& powerSet) {
//     int setSize = set.size();
//     int powerSetSize = 1 << setSize;  // 2^setSize

//     for (int i = 0; i < powerSetSize; ++i) {
//         vector<int> subset;
//         for (int j = 0; j < setSize; ++j) {
//             if ((i & (1 << j)) != 0) {
//                 subset.push_back(set[j]);
//             }
//         }
//         powerSet.push_back(subset);
//     }
// }

// int main() {
//     vector<int> set = {1, 2, 3};
//     vector<vector<int>> powerSet;

//     generatePowerSet(set, powerSet);

//     // Display the power set
//     for (const vector<int>& subset : powerSet) {
//         cout << "{ ";
//         for (int element : subset) {
//             cout << element << " ";
//         }
//         cout << "}\n";
//     }

//     return 0;
// }



//----------------------------------------

/*
Peter and Lock Problem
*/

// int main(){
//     vector<int>v = {10,20,30};

//     int n = v.size();
//     int sum = 0;

//     int setSize = 1 << n;

//     for(int i=0;i<setSize;i++){
//         for(int j=0;j<n;j++){
//             if(i & (1 << j) != 0){
//                 sum += v[j];
//             }
//             else{
//                 sum -= v[j];
//             }
//         }
//     }
// if(sum % 360 == 0){
//     cout<<"yes"<<endl;
// }
// else{
//     cout<<"no"<<endl;
// }

// }

//--------------------------------------------

int main(){
    int n;cin>>n;
    vector<int>v;
    v.push_back(0);
    int cnt = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<32;j++){
            if(i & 1 == 1){
                cnt++;
            }
            i = i >> 1;
        }
        v.push_back(cnt);
        cnt = 0;
    }
    for(int i=0;i<=n;i++){
        cout<<v[i]<<",";
    }cout<<endl;
}