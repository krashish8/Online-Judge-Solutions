/*
Problem Name: A - Lucky Division
Problem ID: 122A
Problem URL: https://codeforces.com/contest/122/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 44701097
Solution Time: 2018-10-22 17:50:47
Language: GNU C++14
Time consumed: 30 ms
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
//	freopen("input.txt", "r", stdin);
	IOS;

	int n,temp=0;
	cin>>n;
	int a[14]={4,7,44,47,74,77,444,447,474,477,744,747,774,777};
	for(int i=0;i<14;i++) {
		if(n%a[i]==0) {temp=1;
			cout<<"YES"; break;}
	}
	if(temp==0) cout<<"NO";
	return 0;
}