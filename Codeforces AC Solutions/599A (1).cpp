/*
Problem Name: A - Patrick and Shopping
Problem ID: 599A
Problem URL: https://codeforces.com/contest/599/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 44698139
Solution Time: 2018-10-22 16:45:26
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
#define pi pair<int,int>
#define endl "\n"
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

int main(){
//	freopen("input.txt", "r", stdin);
	IOS;

	int a,b,c;
	cin>>a>>b>>c;
	cout<<min(min(min(2*(a+b),2*(a+c)),2*(b+c)),a+b+c);
}