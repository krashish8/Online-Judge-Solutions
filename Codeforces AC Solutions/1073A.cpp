/*
Problem Name: A - Diverse Substring
Problem ID: 1073A
Problem URL: https://codeforces.com/contest/1073/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 44876223
Solution Time: 2018-10-25 20:11:48
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
#define dbg(x) { cout<< #x << ": " << (x) << endl; }
#define dbg2(x,y) { cout<< #x << ": " << (x) << " , " << #y << ": " << (y) << endl; }
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)


int main(){
//	freopen("input.txt", "r", stdin);
	IOS;

	int n;
	string s;
	cin>>n>>s;

	for(int i=0;i<n-1;i++) {
		if(s[i]!=s[i+1]) {
			cout<<"YES\n"<<s[i]<<s[i+1];
			return 0;
		}
	}
	cout<<"NO";
	return 0;
}