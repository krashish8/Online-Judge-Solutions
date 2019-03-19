/*
Problem Name: C - Drazil and Factorial
Problem ID: 515C
Problem URL: https://codeforces.com/contest/515/problem/C
Author: Ashish Kumar (ashishkr23438)
Solution ID: 49206259
Solution Time: 2019-01-30 16:59:20
Language: GNU C++17
Time consumed: 31 ms
Memory consumed: 200 KB
*/
#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define double long double
#define pb push_back
#define pii pair<int,int>
#define fi first
#define se second
#define rep(i,a,b) for (int i=a; i<b; ++i)
#define dbg(x) { cout<<#x<<": "<<x<< endl; }
#define dbg2(x,y) { cout<<#x<<": "<<x<<" , "<<#y<<": "<<y<<endl; }
#define dbg3(x,y,z) { cout<<#x<<": "<<x<<" , "<<#y<<": "<<y<<" , "<<#z<<": "<<z<<endl; }
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#ifndef LOCAL
#define endl &#39;\n&#39;
#endif
const int inf = 2000000000;
const double eps = 0.0000001;
const double pi = acos(-1.0);
const int MOD = 998244353;
const int N  = 1e5+5;

bool prime (int n) {
    if(n==1) return 0;
    for (int i = 2; i <= sqrt(n);i++)
        if(n%i==0) return 0;
    return 1;
}

signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;

    int n;
    cin >> n;
   	string s;
   	cin >> s;
   	vector<int> v;
   	for (int i = 0; i < n; ++i)
   	{
   		int d = s[i]-&#39;0&#39;;
   		switch (d) {
   			case 2:
   			case 3:
   			case 5:
   			case 7:
	   			v.pb(d);
	   			break;
	   		case 4:
	   			v.pb(2);v.pb(2);v.pb(3);
	   			break;
	   		case 6:
	   			v.pb(3);v.pb(5);
	   			break;
	   		case 8:
	   			v.pb(2);v.pb(2);v.pb(2);v.pb(7);
	   			break;
	   		case 9:
	   			v.pb(3);v.pb(3);v.pb(2);v.pb(7);
	   			break;

   		}
   	}
   	sort(v.begin(),v.end(),greater<int>());
   	for(auto it : v)
   		cout << it;
    return 0;
}