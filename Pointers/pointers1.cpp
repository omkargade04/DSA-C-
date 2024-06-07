#include<bits/stdc++.h>
using namespace std;

//int main(){
    // int x = 0;
    // float y = 9.3;

    // //pointers stores the address of the variable
    // int *ptr = &x;
    // float *ptrf = &y;

    // cout<<ptr<<endl;//this will display the address of x
    // cout<<ptrf<<endl;

    // cout<<*ptr<<endl;// *ptr is a derefernce operator and it return the value stored at that address
    // cout<<*ptrf<<endl;

    // *ptr = 90;// value of x being updated 

    // cout<<ptr<<endl;//address of x
    // cout<<*ptr<<endl;//updated value of x i.e 90
//}

    //-----------------------------------------------------------------------------------------
// void swap(int *x,int *y){
//     int temp = *x;
//     *x=*y;
//     *y=temp;
// }

// int main(){
//     int x = 10;
//     int y = 20;

//     int *ptr1 = &x;
//     int *ptr2 = &y;

//     swap(ptr1,ptr2);
//     cout<<x<<" "<<y<<endl;

//     return 0;
// }
//----------------------------------------------------------------------------------------------
// void compute(string s,char ch,int *first , int *last){
//     for(int i=0;i<s.size();i++){
//         if(s[i]==ch){
//             *first = i;
//             break;
//         }
//     }
//     for(int i=s.size()-1;i>=0;i--){
//         if(s[i]==ch){
//             *last=i;
//             break;
//         }
//     }
// }

// int main(){
//     string s = 'aabac';
//     char ch = 'a';
//     int first = -1;
//     int last = -1;

//     int *pf = &first;
//     int *pl = &last;

//     compute(s,ch,pf,pl);
//     cout<<first<<" "<<last<<endl;
//     cout<<*pf<<" "<<*pl;
//     return 0;
// }

//------------------------------------------------------------------------------------------------
//POINTERS ARITHMETIC
// int main(){
// int x = 10;
// float y = 9.8;

// int *ptr1 = &x;
// float *ptr2 = &y;

// cout<<sizeof(x)<<"  "<<sizeof(y)<<endl;
// cout<<ptr1<<" "<<(ptr1 + 1)<<" \n";
// cout<<ptr2<<" "<<(ptr2 + 1)<<"\n";

// return 0;
// }
//-----------------------------------------------------------------------------------------------------
// Array Pointers Arithmetic
int main(){
    int arr[2] = {7,4};

    int *ptr = &arr[0];

    //cout<<*ptr++<<endl;
    cout<<++*ptr<<endl;
}