/*
Problem Name: A - Pineapple Incident
Problem ID: 697A
Problem URL: https://codeforces.com/contest/697/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 44845367
Solution Time: 2018-10-25 17:17:26
Language: GNU C++14
Time consumed: 31 ms
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

	int t,s,x;
	cin>>t>>s>>x;
	int a=x-t;
	if(a>=0 && ((a%s==0) || ((a-1)%s==0)) && a!=1) {cout<<"YES"; return 0;}
	cout<<"NO";
	return 0;
}