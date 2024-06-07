   #include<bits/stdc++.h>
   using namespace std;
    int main(){
        vector<int>digits;
        int count = 0;
          int n;cin>>n;
          for(int i = 0 ; i < n ; i++){
            int ele;cin>>ele;
            digits.push_back(ele);
            cout<<digits[i]<<" ";
          }cout<<endl;
        // int lastDigit = digits[n-1]+1;

        // if(digits[n-1]!=9){
        // for(int i = 0 ; i < n ; i++){
        //    // if(digits[n-1]!=9){
        //     digits.pop_back();
        //     digits.push_back(lastDigit);
        //     break;
        //     }
        //     // else if(digits[n-1] == 9){

        //     // }
        // }
        // int ten = lastDigit%10;
        // int one = lastDigit/10;
        // if(digits[n-1]==9){
        //     for(int i = n ; i >=0 ; i--){
        //         digits.pop_back();
        //         digits.push_back(one);
        //         digits.push_back(ten);

        //     }
        // }

        // return digits;
        for(int i = 0 ; i < n ; i++){
            if(digits[i] < 100){
                count++;
            }
        }
        cout<<count;
    }

    /*
    int powr = count - 1;
    int power = pow(10,powr)
    

    
    
    
    */