/*
There's a person Nacho whoes monthly expenses are given to us.
Here N represents the number of months and the expenses are in space-separated integers
For each valid i, Xi represents the expense of ith month

Nacho is particular about spending his expenditure,so he decides not to spend more than Rs.5000 a month.
After spending Xith money on ith month,the remaining money is stored as savings.
But there's an exception,then he can spend more than the monthly limit only if he has enough money in his savings.
Or else he has to borrow from his friend Lalo and return the money from his savings as soon as he is capable.
And Lalo being a nice friend , he lends at an interest of 20%. 
If he is not able to save amount K within N months then return -1.

There's a wrist watch worth K rupees.So after how many months of saving will Nacho be able to purchase the watch.

Input:
1) The first line of the input contains a single integer.
   T denoting the number of test cases. The description of T test cases follows.

2) The first line of each test case contains two integers N,K
    N - Number of months or Size of the Array.
    K - Amount of Wrist Watch.

3) The second line contains N space-seperated integers 
   X1,X2,X3,............Xn.

Output:
For each test case, print a single line containing an integer
i.e the minimum number of months required to purchase the watch.

Test Cases:

Input:

   4
1) 6 4000
   4500 2700 3500 4000 3200 5800

2) 4 3000
   5000 6500 3500 4200

3) 8 5000
   3200 4800 7000 2200 3000 5500 3700 4500

4) 12 5000
   4500 5000 6000 4700 4000 4000 3500 5900 2000 2500 9000 3000

 Output:
 1) 3
 2) -1
 3) 7  
 4) 

*/
#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;cin>>t;
   while(t--){
      int n,k;
      cin>>n>>k;

      int a[n];
      for(int i=0;i<n;i++){
         cin>>a[i];
      }
      int s = 0;//s represents Savings
      int def = -1;
      int currentSaving = 0;
      int totalBorrowedMoney = 0;
      int borrowedMoney = 0;

      for(int i=0;i<n;i++){

         currentSaving = 5000 - a[i];

         if(currentSaving >= 0){
            s += currentSaving;
            if(totalBorrowedMoney > 0){
                if(s > totalBorrowedMoney){
                       s -= totalBorrowedMoney;
                       totalBorrowedMoney = 0;
                  }
                else{
                     totalBorrowedMoney -= s;
                     s=0;
                  }   
            }
         }
         else{
            if(s > abs(currentSaving)){
               s -= abs(currentSaving);
            }
            else{
               borrowedMoney = abs(currentSaving) + ((abs(currentSaving))*0.2);
               totalBorrowedMoney += borrowedMoney;
            }
         }
         if(s >= k){
            cout<<i + 1<<endl;
            break;
         }
      }
         if(s < k){
         cout<<def<<endl;
         }

   }
   return 0;
}

// int main(){
//    int t;cin>>t;
//    while(t--){
//       int n,k;
//       cin>>n>>k;

//       int a[n];
//       for(int i=0;i<n;i++){
//          cin>>a[i];
//       }
//       int s = 0;
//       int minDays = 0;
//       float interest = 0;
//       int def = -1;

//       for(int i=0;i<n;i++){
//          // calculating savings
//          s += 5000-a[i];
//          minDays++;
//          if(s < 0){
//             float S = abs(s);
//             interest = S + (S*0.2);
//             s = 0;
//          }
//          if(s > interest){
//             s -= interest;
//             if(s > k){
//                cout<<minDays<<endl;
//                break;
//             }
//          }
//       }
//       if(s < k){
//          cout<<def<<endl;
//       }
//    }
// }
/*
6 4000
4500 2700 3500 4000 3200 5800
4 3000
5000 6500 3500 4200
8 5000
3200 4800 7000 2200 3000 5500 3700 4500
*/   
