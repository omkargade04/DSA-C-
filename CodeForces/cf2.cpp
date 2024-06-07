// // // #include <iostream>
// // // #include <vector>
// // // #include <algorithm>
// // // #include <cstdint>
// // // #define int long long int

// // // using namespace std;


// // // // void omkar(){
    
// // // //     int n;cin>>n;
// // // // 	    string s[n];
// // // // 	    for(int i=0;i<n;i++){
// // // // 	        cin>>s[i];
// // // // 	    }
    
// // // //     int a = 0;//count of A
// // // //     int b = 0;//count of B
// // // //     int o = 0;//count of O
// // // //     int ab = 0;//count of AB
    
// // // //     for(int i=0;i<n;i++){
// // // //         if(s[i] == "A"){
// // // //             a++;
// // // //         }
// // // //         else if(s[i] == "B"){
// // // //             b++;
// // // //         }
// // // //         else if(s[i] == "O"){
// // // //             o++;
// // // //         }
// // // //         else{
// // // //             ab++;
// // // //         }
// // // //     }
// // // // 	cout<<"count of A : "<<a<<endl;
// // // // 	cout<<"count of B : "<<b<<endl;
// // // // 	cout<<"count of O : "<<o<<endl;
// // // // 	cout<<"count of AB : "<<ab<<endl;

    
// // // // 	if(a > b && o != 0){
// // // //         cout<<a+o<<endl;
// // // //     }
// // // //     else if(a < b && o != 0){
// // // //         cout<<b+o<<endl;
// // // //     }
// // // //     else if(a == b && o != 0){
// // // //         cout<<a+o<<endl;
// // // //     }
// // // //     else if(a > b && ab != 0){
// // // //         cout<<a+ab<<endl;
// // // //     }
// // // //     else if(a < b && ab != 0){
// // // //         cout<<b+ab<<endl;
// // // //     }
// // // //     else if(a == b && ab != 0){
// // // //         cout<<a+ab<<endl;
// // // //     }
// // // //     else if(a > b && o != 0 && ab != 0){
// // // //         cout<<a+o+ab<<endl;
// // // //     }
// // // //     else if(a < b && o != 0 && ab != 0){
// // // //         cout<<b+o+ab<<endl;
// // // //     }
// // // // 	else if(a == b && o != 0 && ab != 0){
// // // //         cout<<a+o+ab<<endl;
// // // //     }
// // // //     else if(a == b){
// // // //         cout<<a<<endl;
// // // //     }
// // // // 	else if (a > b){
// // // //         cout<<a<<endl;
// // // //     }
// // // //     else if(b > a){
// // // //         cout<<b<<endl;
// // // //     }
// // // //     else if(o == n){
// // // //         cout<<o<<endl;
// // // //     }
// // // //     else if(ab == n){
// // // //         cout<<ab<<endl;
// // // //     }
    
// // // // }

// // // // int32_t main() {
// // // // 	// your code goes here
// // // // 	int t;cin>>t;
// // // // 	while(t--){

// // // // 	    omkar();
// // // // 	}
// // // // 	return 0;
// // // // }
// // // //--------------------------------
// // // // int32_t main() {
// // // //    	int t; cin>>t;
// // // // 	while(t--){
// // // // 	int n; cin>>n;

// // // // 	int sum=0, opr=0, k=0;
// // // // 	for(int i=0; i<n; i++){
// // // // 		int x;
// // // // 		cin >> x;

// // // // 		if(x <= 0){
// // // // 			if(x < 0){
// // // // 				k = 1;
// // // // 			}
// // // // 		}else{
// // // // 			if(k == 1){
// // // // 				opr++;
// // // // 			}
// // // // 			k = 0;
// // // // 		}

// // // // 		if(x < 0){
// // // // 			x *= -1;
// // // // 		}
// // // // 		sum += x;
// // // // 	}

// // // // 	if(k == 1){
// // // // 		opr++;
// // // // 	}

// // // // 	cout << sum <<" "<< opr << endl;

// // // // 	}

// // // // 	return 0;

// // // // }
// // // /*
// // // 6 2
// // // 2

// // // */

// // // // bool gR(int n,int m){
// // // // 	if(n == m) {
// // // // 		return true;
// // // // 	}
// // // // 	else if(n % 3 != 0) {
// // // // 		return false;
// // // // 	}
// // // // 	else{
// // // // 		return (gR(n/3,m)) || gR((2*n)/3,m);
// // // // 	}
// // // // }

// // // // void goldRush(){
// // // // 	int n,m;
// // // // 	cin>>n>>m;

// // // // 	if(gR(n,m) == true){
// // // // 		cout<<"YES"<<endl;
// // // // 	}
// // // // 	else{
// // // // 		cout<<"NO"<<endl;
// // // // 	}

// // // // }
// // // // int32_t main(){
// // // // 	int t;cin>>t;
// // // // 	while(t--){
// // // // 		goldRush();
// // // // 	}
// // // // }


// // // int32_t main(){
// // // 	int n;cin>>n;
	
// // // 	string s;
// // // 	vector<string>v;
// // // 	for(int i=0;i<n;i++){
// // // 		cin>>s;
// // // 		v.push_back(s);
// // // 	}
// // // 	char temp;
// // // 	// vector<char>a;
// // // 	pair<char,char>a;
// // // 	for(int i=n-1;i>0;i--){
// // // 		int x = v[i].size();
// // // 		for(int j = x-2; j<x ;j++){
// // // 			cout<<v[i][j];
// // // 			// a.push_back(v[i][j]);
// // // 			a.first = temp;
// // // 			a.second = v[i][j];
// // // 			temp = v[i][j];
// // // 		}cout<<endl;
// // // 	}	
// // // 	// for(int i=0;i<a.size();i++){
// // // 	// 	cout<<a[i];
// // // 	// }
// // // }



// // #include<bits/stdc++.h>

// // #define int     long long int
// // #define ff      first
// // #define ss      second
// // #define pb      push_back
// // #define vi      vector<int>
// // #define vs      vector<string>
// // #define mii     map<int, int>
// // #define mci     map<char, int>
// // #define msi     map<string, int>
// // #define pii     pair<int, int>
// // #define all(x)  (x).begin(), (x).end()

// // const int MOD = 1e9+7;

// // using namespace std;

// // void omkar(int n,int a,int b){
// // 	// code here
// // 	int cnt = 0;
// // 	for(int i=0;i<n;i++){
// // 		if(a > b){
// // 			cnt++;
// // 		}
// // 	}
		
// // 	cout << cnt <<endl;
	
// // 	return;
// // }


// // int32_t main(){

// // #ifndef ONLINE_JUDGE
// // 	freopen("input.txt", "r", stdin);
// // 	freopen("output.txt", "w", stdout);
// // #endif 

// // 	int t; cin>>t;
// // 	while(t--){
// // 		int n; cin>>n;
// // 		int a, b;
// // 		int cnt = 0;
// // 		for(int i=0; i<n; i++){
// // 			cin>> a >>b;
// // 		}
// // 	omkar(n,a,b);

// // 	return 0;

// // }
// // }
































// #include<bits/stdc++.h>

// #define int     long long int
// #define ff      first
// #define ss      second
// #define pb      push_back
// #define vi      vector<int>
// #define vs      vector<string>
// #define mii     map<int, int>
// #define mci     map<char, int>
// #define msi     map<string, int>
// #define pii     pair<int, int>
// #define all(x)  (x).begin(), (x).end()

// const int MOD = 1e9+7;

// using namespace std;


// int32_t main(){

// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif 

// 	int t;cin>>t;
// 	while(t--){
// 		char mat[3][3];
// 		for(int i=0;i<3;i++){
// 			for(int j=0;j<3;j++){
// 				cin>>mat[i][j];
// 			}
// 		}
// 		int Xcnt = 0;
// 		int Ocnt = 0;
// 		int plusCnt = 0;
// 		int dotCnt = 0;
// 		int index = 0;

// 		for(int i=0;i<3;i++){
// 			for(int j=0;j<3;j++){
// 				if(mat[i][j] == 'X'){
// 					Xcnt++;
// 					index += j;
// 				}
// 			}
// 		}
// 		if(Xcnt == 3 && index == 3){
// 			cout<<"X"<<endl;
// 		}
// 		else{
// 			index = 0;
// 		}

// 		for(int i=0;i<3;i++){
// 			for(int j=0;j<3;j++){
// 				if(mat[i][j] == 'O'){
// 					Ocnt++;
// 					index += j;
// 				}
// 			}
// 		}
// 		if(Ocnt == 3 && index == 3){
// 			cout<<"O"<<endl;
// 		}
// 		else{
// 			index = 0;
// 		}

// 		for(int i=0;i<3;i++){
// 			for(int j=0;j<3;j++){
// 				if(mat[i][j] == '+'){
// 					plusCnt++;
// 					index += j;
// 				}
// 			}
// 		}
// 		if(plusCnt == 3 && index == 3){
// 			cout<<"+"<<endl;
// 		}
// 		else{
// 			index = 0;
// 		}

// 		for(int i=0;i<3;i++){
// 			for(int j=0;j<3;j++){
// 				if(mat[i][j] == '.'){
// 					dotCnt++;
// 					index += j;
// 				}
// 			}
// 		}
// 		if(dotCnt > 3){
// 			cout<<"DRAW"<<endl;
// 		}

// 	}
// 	return 0;

// }





#include<bits/stdc++.h>

using namespace std;

#define int long long int
#define double long double
#define f      first
#define s      second
#define pb     push_back
#define vi     vector<int>
#define mii    map<int,int>
#define pii    pair<int,int>
#define all(v) v.begin(),v.end()

void solve(){
	int n,k;
	cin>>n>>k;

	vector<int>v;
	for(int i=0;i<n;i++){
		int e;cin>>e;
		v.push_back(e);
	}

	int tempa = 0;
	int diff = 0;

	if(k == 1){
		cout<<0<<endl;
	}
	else if(k == 2){
		bool flag = false;

		map<int,int>m;

		for(int i=0;i<n;i++){
			m[v[i]]++;
		}

		for(auto it:m){
			if(it.second == n-1){
				flag = true;
			}
		}

		if(flag){
			cout<<0<<endl;
		}
		else{
			cout<<1<<endl;
		}
	}
	else if(n == k){

	}
	else if(k >= 3){
		int mn = INT_MAX;
		int p1 = 0;
		int p2 = n-1;
		while(p1 < p2){
		
			if(v[p1] == v[p2]){
						
				if(tempa != v[p1]){
					diff = p2 - p1;
					mn = min(diff,mn);
					p2 = n-1;
					p1++;
				}
				else p2--;
				tempa = v[p1];
			}
		}
		cout<<mn-1<<endl;

	}
}


int32_t main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t;cin>>t;
	while(t--){
		solve();
	}
return 0;

}
