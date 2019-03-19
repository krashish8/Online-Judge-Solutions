/*
Problem Name: B - LCM
Problem ID: 1068B
Problem URL: https://codeforces.com/contest/1068/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 44790074
Solution Time: 2018-10-24 20:03:36
Language: GNU C++14
Time consumed: 46 ms
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
#define fi first
#define se second
#define mod 1000000007
#define inf 2e9+9
#define pi pair<ll,ll>
#define endl "\n"
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

int main(){
	//freopen("input.txt", "r", stdin);
	IOS;

	ll n,c=0;
	cin>>n;
	for(ll i=1;i<=sqrt(n);i++) {
		if(n%i==0) {
			if(n/i==i) c++;
			else c+=2;
		}
	}
	cout<<c;
	return 0;
}