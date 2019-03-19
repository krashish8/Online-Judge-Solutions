#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define double long double
#define pb push_back
#define pii pair<int,int>
#define fi first
#define se second
#define rep(i,a,b) for (int i=a; i<b; ++i)
#define dbg(x) { cerr<<#x<<": "<<x<< endl; }
#define dbg2(x,y) { cerr<<#x<<": "<<x<<" , "<<#y<<": "<<y<<endl; }
#define dbg3(x,y,z) { cerr<<#x<<": "<<x<<" , "<<#y<<": "<<y<<" , "<<#z<<": "<<z<<endl; }
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#ifndef LOCAL
#define endl '\n'
#endif
const int inf = INT_MAX;
const double eps = 0.0000001;
const double PI = acos(-1.0);
const int MOD = 1e9+7;
const int N  = 5e5+5;

int dp[1000001];

int func (int n) {
	if(n <= 1000000 && dp[n]!=-1) return dp[n];
	int a;
	if(n%2==0) {
		a = func (n/2)+1;
	}
	else {
		a = func (n*3+1) + 1;
	}
	if(n<=1000000)
	dp[n] = a;
	return a;
}

signed main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif  
    IOS;

    clock_t tStart = clock();
    
    for (int i = 0; i <= 1000000; ++i)
    {
    	dp[i] = -1;
    }
    dp[0] = 0;
    dp[1] = 0;
    for (int i = 0; i <= 1000000; ++i)
    {
    	if(dp[i]==-1) func(i);
    }
    int mx = 0, ans = 0;
    for (int i = 0; i <= 1000000; ++i)
    {
    	if(dp[i] > mx) {mx = dp[i]; ans = i;}
    }
    cout << ans;

    cerr<<fixed<<setprecision(10)<<"\nTime Taken: "<<(double)(clock()- tStart)/CLOCKS_PER_SEC<<endl;
    return 0;
}