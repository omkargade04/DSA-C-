// author : Omkar Gade (^o^)

#include <bits/stdc++.h>

using namespace std;

#define int long long int
#define double long double int
#define f first
#define s second
#define pb push_back
#define vi vector<int>
#define vvi vector<vector<int>>
#define mvi map<int, vector<int>>
#define mii map<int, int>
#define si stack<int>
#define pii pair<int, int>
#define all(v) v.begin(), v.end()
const int MOD = 1e9 + 7;
// const int N = 1e9+7;

//---------------------------------------------------------------------------------

// Function to check whether the array is sorted or not

// bool sorted(vi &v){
// 	int n = v.size();
// 	vi temp = v;
// 	int cnt = 0;

// 	sort(all(temp));

// 	for(int i=0;i<n;i++){
// 		if(temp[i] == v[i]){
// 			cnt++;
// 		}
// 		else{
// 			return false;
// 		}
// 	}
// 	if(cnt == n){
// 		return true;
// 	}

// 	return true;

// }

//---------------------------------------------------------------------------------

// bool isPrime(int n)
// {
//     // Corner case
//     if (n <= 1)
//         return false;

//     // Check from 2 to n-1
//     for (int i = 2; i <= n / 2; i++)
//         if (n % i == 0)
//             return false;

//     return true;
// }

// int div(int n){

//     for (int i = 2; i * i <= n; i += 2) {
//         if (n % i == 0) {
//             return i;
//         }
//     }

//     return n;
// }

//---------------------------------------------------------------------------------

// Code to calculate GCD

// int gcd(int a, int b) {
//     while (b != 0) {
//         int temp = b;
//         b = a % b;
//         a = temp;
//     }
//     return a;
// }

// int lcm(int a, int b) {
//     return a * b / gcd(a, b);
// }

// int range_sum(int l, int r) {
//     if (l > r) {
//         return 0;
//     }
//     return (l + r) * (r - l + 1) / 2;
// }

//----------------------------------------------------------------------------------

int ceil(int a, int b)
{
    return (a / b) + ((a % b) != 0);
}

//----------------------------------------------------------------------------------

void db(int x)
{
    cout << x << " " << endl;
    return;
}

// SOLUTION :

void solve()
{
    int n;
    cin >> n;
    vi a;
    for (int i = 0; i < n; i++)
    {
        int e;
        cin >> e;
        a.pb(e);
    }

    int minus = 0;
    int plus = 0;

    for (auto i : a)
    {
        if (i == -1)
        {
            minus++;
        }
        else
        {
            plus++;
        }
    }

    int op = 0;
    int sum = 0;

    for (auto i : a)
        {
            sum += i;
        }

    if (sum >= 0)
    {
        if (minus % 2 == 0)
        {
            db(0);
            return;
        }
        db(1);
        return;
    }
    else
    {
        
        while (true)
        {
            if (sum < 0 && minus > plus)
            {
                minus--;
                plus++;
                sum += 2;
                op++;
            }
            else if (sum >= 0 && (plus >= minus))
            {
                if(minus == 0)
                {
                    db(op);
                    return;
                }
                if (minus % 2 == 0)
                {
                    db(op);
                    return;
                }
                op++;
                db(op);
                return;
            }
        }
    }

}

int32_t main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
