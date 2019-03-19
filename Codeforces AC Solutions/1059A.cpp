/*
Problem Name: A - Cashier
Problem ID: 1059A
Problem URL: https://codeforces.com/contest/1059/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 43839419
Solution Time: 2018-10-05 17:56:13
Language: GNU C++14
Time consumed: 78 ms
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
#define pi pair<int,int>
#define endl "\n"
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

int main(){
	//freopen("input.txt", "r", stdin);
	IOS;

	int n,L,a,c=0;
	cin>>n>>L>>a;
	int t0=0,tn=0;
	while(n--) {
		int t,l;
		cin>>t>>l;
		tn=t-t0; ////////////////break gap
		if(tn>=a) c+=tn/a;
		t0=t+l;   ////////////////final timing after cus
	}
	int tnn=L-t0;
	if(tnn>=a) c+=tnn/a;
	cout<<c;
	return 0;
}