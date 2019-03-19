/*
Problem Name: A - Die Roll
Problem ID: 9A
Problem URL: https://codeforces.com/contest/9/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 44698681
Solution Time: 2018-10-22 16:57:38
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
#define pi pair<int,int>
#define endl "\n"
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

int main(){
//	freopen("input.txt", "r", stdin);
	IOS;

	int y,w;
	cin>>y>>w;
	int a=6-(max(y,w))+1;
	if(a==1) cout<<"1/6";
	else if(a==2) cout<<"1/3";
	else if(a==3) cout<<"1/2";
	else if(a==4) cout<<"2/3";
	else if(a==5) cout<<"5/6";
	else cout<<"1/1";
}