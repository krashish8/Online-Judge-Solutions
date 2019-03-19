/*
Problem Name: B - Vasya and Books
Problem ID: 1073B
Problem URL: https://codeforces.com/contest/1073/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 44858851
Solution Time: 2018-10-25 18:16:08
Language: GNU C++14
Time consumed: 124 ms
Memory consumed: 2400 KB
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

int a[200005],b[200005],c[200005];

int main(){
	//freopen("input.txt", "r", stdin);
	IOS;

	int n;
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
		c[a[i]]=i;
	}
	for (int i = 0; i < n; ++i)
	{
		cin>>b[i];
	}
	int lim=-1;
	for (int i = 0; i < n; ++i)
	{
		if(c[b[i]]>=lim) {
			cout<<c[b[i]]-lim<<" ";
			lim=c[b[i]];
		}
		else cout<<0<<" ";
	}
	return 0;
}