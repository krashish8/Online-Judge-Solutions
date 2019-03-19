/*
Problem Name: B - T-primes
Problem ID: 230B
Problem URL: https://codeforces.com/contest/230/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 45146326
Solution Time: 2018-10-31 20:04:51
Language: GNU C++14
Time consumed: 1216 ms
Memory consumed: 0 KB
*/
#include<iostream>
#include<cmath>
#include<vector>
#include<string>
#include<set>
#include<algorithm>
#include<iomanip>
//#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define mod 1000000007
#define inf 2e9+9
#define pii pair<int,int>
#define vi vector<int>
#define vii vector<pii>
#define mi map<int,int>
#define mii map<pii,int>
#define all(a) (a).begin(), (a).end()
#define sz(x) (int)x.size()
#define ubnd upper_bound()
#define bs binary_search()
#define endl "\n"
#define dbg(x) { cout<< #x << ": " << (x) << endl; }
#define dbg2(x,y) { cout<< #x << ": " << (x) << " , " << #y << ": " << (y) << endl; }
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

int ck(ll n){
	ll c=0;
	for (ll i = 2; i*i <= n; ++i)
	{
		if(n%i==0) return 0;
	}
	return 1;
}

int main(){
//	freopen("input.txt", "r", stdin);
	IOS;

	ll n;
	cin>>n;
	while(n--) {
		ll a;
		cin>>a;
		if(a==1) {cout<<"NO\n"; continue;}
		ll b=sqrt(a);
		if(b*b!=a) cout<<"NO\n";
		else {
			if(ck(b)) cout<<"YES\n";
			else cout<<"NO\n";
		}
	}
	return 0;
}