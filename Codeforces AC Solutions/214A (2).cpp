/*
Problem Name: A - System of Equations
Problem ID: 214A
Problem URL: https://codeforces.com/contest/214/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 44844797
Solution Time: 2018-10-25 17:05:24
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
	//freopen("input.txt", "r", stdin);
	IOS;

	int n,m,c=0;
	cin>>n>>m;
	for(int i=0;i<=sqrt(n);i++) {
		int b=n-i*i;
		if(i+b*b==m) c++;
	}
	cout<<c;
	return 0;
}