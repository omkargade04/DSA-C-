
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

// void sortEvenandOdd(vector<int> &v){
//  int even_count = 0;
//  for (int i = 0; i < v.size(); ++i)
//  {
//  	if (v[i]%2==0)
//  	{
//  		even_count++;
//  	}
//  }

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
// TWO POINTERS*****
//  	int left_ptr = 0;
//  	int right_ptr = v.size()-1;

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
*/

#include <bits/stdc++.h>
using namespace std;

void SumBetweenIndex(vector<int> &v, int a, int b)
{

	int left_ptr = a;
	int right_ptr = b;

	while (left_ptr < right_ptr)
	{
		int sum = 0;
		for (int i = a; i <= b; i++)
		{
			sum += v[i];
		}
		cout << sum << endl;
	}
	return;
}
int main()
{
	std::vector<int> v;
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int ele;
		cin >> ele;
		v.push_back(ele);
		cout << v[i] << " ";
	}
	cout << endl;

	int L;
	int R;
	cin >> L;
	cin >> R;

	SumBetweenIndex(v, L, R);

	cout << endl;
}