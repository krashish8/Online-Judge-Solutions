/*
Problem Name: B - Divisor Subtraction
Problem ID: 1076B
Problem URL: https://codeforces.com/contest/1076/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46398844
Solution Time: 2018-11-30 14:12:53
Language: GNU C++14
Time consumed: 31 ms
Memory consumed: 0 KB
*/
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 1000000007
#define inf 2e9+9
#define endl &#39;\n&#39;
#define rep(i,a,b) for(int i=a;i<b;++i)
#define dbg(x) { cout<< #x << ": " << (x) << endl; }
#define dbg2(x,y) { cout<< #x << ": " << (x) << " , " << #y << ": " << (y) << endl; }
#define eps 0.0000001
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)



int main(){
    //freopen("input.txt", "r", stdin);
    IOS;

    ll n;
    cin>>n;
    if(n%2==0) cout<<n/2;
    else {
    	ll i;
    	for(i=3;i<=sqrt(n);i++) {
    		if(n%i==0) break;
    	}
    	if(i==(int)sqrt(n)+1) cout<<1;
    	else
    		cout<<1+(n-i)/2;
    }
    return 0;
}