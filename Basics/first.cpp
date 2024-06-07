#include<bits/stdc++.h>
#include<vector>
using namespace std;

// void sortzeroandone(vector<int> &v){

// 	int zeros_count=0;
// 	for (int i:v)
// 	{if (i==0)
// 	{
// 		zeros_count++;
// 	}
		
// 	}

// 	for (int i = 0; i < v.size(); ++i)
// 	{
// 		if (i<zeros_count)
// 			{
// 				v[i] = 0;
// 			}
// 			else{
// 				v[i] = 1;
// 			}	
// 		}
// }

// int main()
// {
// 	vector<int> v;

// 	int n;
// 	cin>>n;

// 	 for (int i = 0; i < n; ++i)
// 	 {
// 	 	int element;
// 	 	cin>>element;
// 	 	v.push_back(element);
// 	 	cout<<v[i]<<" ";
// 	 }
// 	 cout<<endl;
//***********

// 	 // for (int i = 0; i < n; ++i)
// 	 // {
// 	 // 	// for (int j = i+1; j < n; ++j)
// 	 // 	// {
// 	 // 		if(v[i]!=1){
// 	 // 			cout<<v[i]<<" ";
// 	 // 		}
// 	 // 		// if(v[i]!=0){
// 	 // 		// 	cout<<v[i]<<" ";
// 	 // 		// }
// 	 // 	//}
// 	 // }
// 	 // for (int j = 0; j < n; ++j)
// 	 // {
// 	 // 	if (v[j]!=0)
// 	 // 	{
// 	 // 		cout<<v[j]<<" ";
// 	 // 	}
// 	 // }
// 	 //*********
// 	 sortzeroandone(v);
// 	 cout<<"Sorted Array";

// 	 for (int i = 0; i < v.size(); ++i)
// 	 {
// 	 	cout<<v[i]<<" ";
// 	 }
// 	 cout<<endl;


//void sortEvenandOdd(vector<int> &v){
	// int even_count = 0;
	// for (int i = 0; i < v.size(); ++i)
	// {
	// 	if (v[i]%2==0)
	// 	{
	// 		even_count++;
	// 	}
	// }

	// for (int i = 0; i < v.size(); ++i)
	// {
	// 	if(v[i]%2==0){
	// 		cout<<v[i]<<" ";
	// 	}
	// }
	// for (int i = 0; i < v.size(); ++i)
	// {
	// 	if(v[i]%2!=0){
	// 		cout<<v[i]<<" ";
	// 	}
	// }
	// cout<<endl;
//TWO POINTERS*****
// 	int left_ptr = 0;
// 	int right_ptr = v.size()-1;

// 	while(left_ptr < right_ptr)
// 	{
// 		if(v[left_ptr]%2==1 && v[right_ptr]%2!=1){
// 			swap(v[left_ptr],v[right_ptr]);
// 			left_ptr++; right_ptr--;
// 		}
// 		if (v[left_ptr]%2==0)
// 		{
// 			left_ptr++;
// 		}
// 		if (v[right_ptr]%2==1)
// 		{
// 			right_ptr--;
// 		}
// 	}
// 	return;
// } 

// int main(){

// 	std::vector<int> v;

// 	int n; cin>>n;

// 	for (int i = 0; i < n; ++i)
// 	{
// 		int ele;
// 		cin>>ele;
// 		v.push_back(ele);
// 		cout<<v[i]<<" ";
// 	}
// 	cout<<endl;

	// for (int i = 0; i < n; ++i)
	// {
	// 	if(v[i]%2==0){
	// 		cout<<v[i]<<" ";
	// 	}
	// }

	// for (int i = 0; i < n; ++i)
	// {
	// 	if(v[i]%2!=0){
	// 		cout<<v[i]<<" ";
	// 	}
	// }
	// cout<<"Sorted Array is ";
	// sortEvenandOdd(v);
	// for (int i = 0; i < v.size(); ++i)
	// {
	// 	cout<<v[i]<<" ";
	// }
	// cout<<endl;
//----------------------------------------------------------------------------
// 	void sortSquareofArray(vector<int> &v){

// 		std::vector<int> ans;

// 		int left_ptr = 0;
// 		int right_ptr = v.size()-1;

// 		while(left_ptr < right_ptr){

// 				if(abs(v[left_ptr]) > abs(v[right_ptr]))
// 				{
// 					ans.push_back(v[left_ptr]*v[left_ptr]);
// 					left_ptr++;
// 				}
				
// 				if(abs(v[left_ptr]) < abs(v[right_ptr])){

// 					ans.push_back(v[right_ptr]*v[right_ptr]);
// 					right_ptr--;
// 				}

// 				reverse(ans.begin(),ans.end());
// 				for (int i = 0; i < ans.size(); ++i)
// 				{
// 					cout<<ans[i]<<" ";
// 				}
// }
// return;
// }
// int main(){

// 		vector<int> v;

// 		int n; cin>>n;

// 		for (int i = 0; i < n ; ++i)
// 		{
// 			int ele; cin>>ele;
// 			v.push_back(ele);
// 			cout<<v[i]<<" ";
// 		}
// 		cout<<endl;

// 		sortSquareofArray(v);

// 		cout<<"Sorted Array is "<<endl;

// 		for (int i = 0; i < n ; ++i)
// 		{
// 			cout<<v[i]<<" ";
// 		}
// 		cout<<endl;
// return 0;
// }
/*
**************************PROBLEMS ON ARRAY 3*******************************
*
 * *
    * * * ********************************************************************
// */	//void SumBetweenIndex(vector<int> &v,int a,int b){
// 	int left_ptr = a;
// 	int right_ptr = b;

	
// 		int sum = 0;
// 		for(int i = a ; i <= b ; i++ ){
// 			sum += v[i];
//             left_ptr++;
//             right_ptr++;
		
		
// 	}
//     cout<<sum<<endl;
// 	return;
// }
	// int main(){
	// 	std::vector<int> v;
	// 	int n;cin>>n;
	// 	for (int i = 0; i < n; ++i)
	// 	{
	// 		int ele;
	// 		cin>>ele;
	// 		v.push_back(ele);
	// 		cout<<v[i]<<" ";
	// 	}
	// 	cout<<endl;
    // }

// 		int L;
// 		int R;
// 		cin>>L;
// 		cin>>R;

// 		SumBetweenIndex(v,L,R);
		
// 		cout<<endl;


// }
// int vec(vector<int>&arr){
// for(int i=1;i<arr.size();i++)
// {
// arr[i]+=arr[i-1];
// }
// int count=0;
// for(int i=0;i<arr.size();i++)
// {
// for(int j=i+1;j<arr.size();j++)
// {
// if(i==0 && arr[j]%2!=0)
// {
// count++;
// }
// else if((arr[j] - arr[i-1] && i!=0)%2!=0)
// {
// count++;
// }
// }
// }

// return count;
// }
//  int main(){
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
// 		vector<int>arr;
// 		for(int i = 0 ; i <=n ; i++){
// 			if(v[i]%2 == 0){
// 				arr.push_back(v[i]);
// 			}
// 			cout<<arr[i]<<" ";
// 			cout<<v[i]<<" ";
// 		}
		//cout<<vec(v);
    //}
	int main(){
		//-----------------------
		// vector<int>arr1;
		// vector<int>arr2;
		// vector<int>v;
	    //int m;cin>>m;
		//int n;cin>>n;

		//	int t;cin>>t;
	//while(t--){
	    // int n;cin>>n;
	    // int a[n];
	    // for(int i=0;i<n;i++){
	    //     cin>>a[i];
	    // }
	    // int b[n];
	    // for(int i=0;i<n;i++){
	    //     cin>>b[i];
	    // }
	    // for(int i=1;i<n;i++){
		// 	if(i+1<n){
	    //     a[i] = ((a[i-1] | a[i]) | a[i+1]);
		// 	}
	    // }
		//  for(int i=0;i<n;i++){
	    //     cout<<a[i]<<" ";
	    // }cout<<endl;
		
	    // if(a == b){
	    //     cout<<"YES"<<endl;
	    // }
	    // else{
	    //     cout<<"NO"<<endl;
	    // }

		//----------------------------
	//}
	// 	int t;cin>>t;
	// while(t--){
	    string s;cin>>s;
	    int zeros_count = 0;
	    int ones_count = 0;
	    for(int i = 0;i<s.size() ; i++){
	        if(s[i] == '0'){
	            zeros_count++;
	        }
	        else{
	            ones_count++;
	        }
	    }
		cout<<zeros_count<<" "<<ones_count<<endl;
	    if(zeros_count == 1 or ones_count == 1){
	        cout<<"yes"<<endl;
	    }
	    else{
	        cout<<"no"<<endl;
	    }
	    
	//}

	//---------------------------------
		// for(int i=0;i<n;i++){
		// 	int e;cin>>e;
		// 	arr1.push_back(e);
		// }
		// for(int i=0;i<n;i++){
		// 	int e;cin>>e;
		// 	arr2.push_back(e);
		// }

		// if(arr1 == arr2){
		// 	cout<<"YES"<<endl;
		// }
		// else{
		// 	cout<<"NO"<<endl;
		// }

		// for(int i = 0 ; i < m ; i++){
		// 	int ele1;cin>>ele1;
		// 	arr1.push_back(ele1);
		// 	cout<<arr1[i]<<" ";
		// }cout<<endl;

		// for(int i = 0 ; i < n ; i++){
		// 	int ele2;cin>>ele2;
		// 	arr1.push_back(ele2);
		// 	cout<<arr2[i]<<" ";
		// }cout<<endl;

		// int i = m-1;//first pointer
		// int j = n-1;//second pointer
		//int k = m+n-1;//pointer of merged array
		//int arr[m+n];

		// while(i>= 0 && j>=0){
		// 	if(arr1[i] < arr2[j]){
		// 		arr[k] = arr1[j];
		// 		k--;j--;
		// 	}
		// 	else{
		// 		arr[k] = arr2[i];
		// 		k--;i--;
		// 	}
		// }
		// while(j >= 0){
		// 	arr[k] = arr2[j];
		// 	k--;j--;
		// }
		// while(i >= 0){
		// 	arr[k] = arr1[i];
		// 	k--;i--;
		// }
		//--------------------------
	// int k = 0;

	// for(int i = 0 ; i < m ; i++){
	// 	v[k++] = arr1[i];
		
	// }
	// for(int j = 0 ; j < n ; j++){
	// 	v[k++] = arr2[j];
		
	// }
	// for(int i = 0 ; i < m+n ; i++){
	// 	cout<<v[i]<<" ";
	// }cout<<endl;

	return 0;
	}

