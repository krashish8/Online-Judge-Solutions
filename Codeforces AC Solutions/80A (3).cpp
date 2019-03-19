/*
Problem Name: A - Panoramix's Prediction
Problem ID: 80A
Problem URL: https://codeforces.com/contest/80/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 44844150
Solution Time: 2018-10-25 16:52:58
Language: GNU C++14
Time consumed: 92 ms
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

int checkpr(int n) {
	int c=0;
	for(int i=2;i<=sqrt(n);i++) {
		if(n%i==0) c++;
	}
	if(c==0) return 1;
	else return 0;
}

int main(){
	//freopen("input.txt", "r", stdin);
	IOS;

	int n,m,i;
	cin>>n>>m;
	int temp=0;
	for (i = n+1; i <= m; ++i)
	{
		if(checkpr(i)) {temp=1; break;}
	}
	if(temp==1 && i==m) cout<<"YES";
	else cout<<"NO";
	return 0;
}