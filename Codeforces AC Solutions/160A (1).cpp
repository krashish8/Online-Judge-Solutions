/*
Problem Name: A - Twins
Problem ID: 160A
Problem URL: https://codeforces.com/contest/160/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 44777942
Solution Time: 2018-10-24 18:11:34
Language: GNU C++14
Time consumed: 62 ms
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
//	freopen("input.txt", "r", stdin);
	IOS;

	int n;
	cin>>n;
	int a[n],s=0;
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
		s+=a[i];
	}
	int c=0,s2=0;
	sort(a,a+n,greater<int>());
	for(int i=0;i<n;i++) {
		c++;
		s-=a[i];
		s2+=a[i];
		if(s2>s) break;

	}
	cout<<c;
	return 0;
}