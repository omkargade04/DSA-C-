#include<iostream>
#include<vector>
using namespace std;
// void sumOfIndix(vector<int>&v,int a,int b){
//     int left_ptr = a;
//     int right_ptr = b;
//     int sum = 0;
//     for(int i = a ; i <= b ; i++){
//         sum += v[i];
//         left_ptr++;
//         right_ptr--;
//     }
//     cout<<sum<<endl;
// }
// int main(){
// 		std::vector<int> v;
// 		int n;cin>>n;

// 		for (int i = 0; i < n; ++i)
// 		{
// 			int ele;
// 			cin>>ele;
// 			v.push_back(ele);
// 			cout<<v[i]<<" ";
// 		}
// 		cout<<endl;

//         int L;cin>>L;
        
//         int R;cin>>R;

//         sumOfIndix(v,L,R);
//         return 0;
   // }
   //*******************************************
//    void maxLengthOfSeq(vector<int>&v){
//     int zeros_count = 0;
//     int ones_count = 0;
    
//     for(int i = 0 ; i < v.size() ; i++){
//         if(v[i] == 0){
//             zeros_count++;
//         }
        
//         if(v[i] == 1){
//             ones_count++;
//             }
//     }        
//         if(zeros_count < ones_count){
//             cout<<2*zeros_count;
//         }
//         else{
//             cout<<2*ones_count;
//         }
// }

//    int main(){
    
//      vector<int>v;

//     int n;cin>>n;

//      for(int i = 0 ; i < n ; i++){
//         int ele;cin>>ele;
//         v.push_back(ele);
//         cout<<v[i]<<" ";
//       }cout<<endl;

//     maxLengthOfSeq(v);

//     return 0;
//    }
   
 //******************************************
//    int  no_OfConseqSeq(vector<int>&arr){
//     int odd_count = 0;
//     // int sum_count = 0;
//      int sum = 0;

//     for(int i = 0 ; i < arr.size() ; i++){
//         if(arr[i]%2 != 0){
//             odd_count++;
//         }
//     }
//     for (int i = 0; i < arr.size() ; i++)
//     {
//         sum += arr[i];
//     }

//     for (int i = 0; i < arr.size(); i++)
//     {
//         /* code */
//     if(sum%2 == 1){
//             odd_count++;
//         }
//     }

//     for(int i = 0 ; i < arr.size() ; i++){
//         for(int j = i+1 ; j < arr.size() ; j++){
//             if(arr[i] + arr[j]%2 == 1){
//                 odd_count++;
//             }
//         }
//     }
//     return odd_count;
// }

//    int main(){

//     vector<int>arr;
//     int n;cin>>n;


//     for (int i = 0; i < n ; i++)
//     {
//         int ele;cin>>ele;
//         arr.push_back(ele);
//         cout<<arr[i]<<" ";
//     }cout<<endl;
    
//      int ans1 =no_OfConseqSeq(arr);
//      cout<<ans1<<endl;
//     // for (int i = 0; i < n; i++)
//     // {
//     //     cout<<arr[i]<<" ";
//     // }cout<<endl;
    
//    }
   //************GFG Problem**********************************
//    int sumOfElementBetweenTwoIndices(vector<int>&v,int S,int L,int R){
//     for(int i = 1 ; i < v.size() ; i++){
//         v[i] += v[i-1];
//         cout<<v[i]<<" ";
//     }cout<<endl;

//     if(v[R] - v[L-1] == S){

//         return true;
//     }
//     else{
//         return false;
//     }
    // for(int i = 0 ; i < v.size() ; i++){
    //     for(int j = i+1 ; j < v.size() ; j++){
    //         if(v[j] - v[i] == S){
    //             cout<< i+1<<" "<<j<<endl;
    //             break;
    //         }
    //     }
    // }

  // }

//    int main(){
//     int n;cin>>n;
//     vector<int>A(1,0);

//     for(int i = 0 ; i< n ; i++){
//         int ele;cin>>ele;
//         A.push_back(ele);
//         cout<<A[i]<<" ";
//     }cout<<endl;
//     cout<<sumOfElementBetweenTwoIndices(A,12,2,4);

//    }

   
//  void twoSum(vector<int>& nums, int target) {
//         for(int i = 0 ; i < nums.size() ; i++){
//             for(int j = i+1 ; j < nums.size() ; j++){
//                 if(nums[i] + nums[j] == target){
//                     cout<<"["<<i<<","<<j<<"]";
//                 }
//             }
//         }
//        return  ;
//     }
//int removeEle(vector<int>&nums,int val){
       // int k = 0;
        // int left_ptr = 0;
        // int right_ptr = nums.size() - 1;

        // for ( int i = 0 ; i < nums.size() ; i++ ){
        //     if(nums[left_ptr] == nums[right_ptr] ){
               
        //         nums.erase(nums.begin()+left_ptr);
        //          nums.erase(nums.end()+right_ptr);
        //         left_ptr++;
        //         right_ptr--;
        //         }
            
        //     else{
        //         left_ptr++;
        //     }

        //     if(nums[i] <= 100){
        //         k++;
        //     }
        // }
//          for(int i = 0 ; i < nums.size() ; i++){
//            // for(int j = i+1 ; j < nums.size(); j++){
//                  if(nums[i] /*== nums[j]*/ == val){
//                     nums.erase(nums.begin()+i);
                   
//                 //}
//             }
//             // else{
//             //     i++;
//             // }
//             if(nums[i] <= 100){
//                 k++;
//             }
//         }
//         return k;
// }
    



    //  int main(){
    // int n;cin>>n;
    // vector<int>v;

    // for(int i = 0 ; i< n ; i++){
    //     int ele;cin>>ele;
    //     v.push_back(ele);
    //     cout<<v[i]<<" ";
    // }cout<<endl;

    // removeEle(v,2);
    //  }

     //****************************REMOVE ZEROS***********************************
    // int removeZeros(vector<int>&v){  int k = 0;

    //    int left_ptr = 0;
    //    int right_ptr = 0; 
       
    //    for(int i = 0 ; i < v.size() ; i++){

    //       if( v[left_ptr] == 0){
    //              if(v[right_ptr] != 0){
    //             swap( v[left_ptr],v[right_ptr ]);
    //                left_ptr++;
    //                right_ptr++;
    //                //continue;
    //        }
    //             else{
    //                  right_ptr++;
    //             }
    //        }
    //     //      else{
    //     //        left_ptr++;
    //     //        //swap( v[left_ptr],v[right_ptr ]);
    //     //        if(v[left_ptr] == 0){
    //     //        if(v[right_ptr] != 0 ){
    //     //        swap( v[left_ptr],v[right_ptr ]);
    //     //    }
    //     //    }

    //     //    }
           
    //               if(true){
    //                  k++;
    //              }
    //              return k;
    //    }    
    //         } 
            int main(){
                
     
    int n;cin>>n;
    vector<int>v;

    for(int i = 0 ; i< n ; i++){
        int ele;cin>>ele;
        v.push_back(ele);
        cout<<v[i]<<" ";
    }cout<<endl;

    vector<int>newArr;

    for(int i = 0 ; i <= n ; i++){
        newArr.push_back(i);
        cout<<newArr[i]<<" ";
    }cout<<endl;
    
    // vector<int>sameArr;

    // int firstPointer = 0;
    // int secondPointer = 0;

    // for(int i = 0 ; i <= n ; i++){
    //     if(v[firstPointer] == newArr[secondPointer]){
    //         sameArr.push_back(newArr[secondPointer]);
    //         firstPointer++;
    //         secondPointer++;
          

    //     }
    //     else{
    //         firstPointer++;
    //     }
    //    cout<<newArr[i]<<" ";
    // }
    int sumOfNums = 0;
    int sum = 0;
    for(int i = 0 ; i < n ; i++ ){
        sumOfNums += v[i];
        //sumOf_newArr += newArr[i];
    }
    for(int i = 0 ; i <= n ; i++){
        sum += i;
    }
    int ans = sum - sumOfNums;
    // ans = sumOf_newArr - sumOfNums;
    // sumOfNums - sumOf_newArr;
    cout<<ans<<endl;
   
     }
            