/*
Problem Name: A - The Monster
Problem ID: 787A
Problem URL: https://codeforces.com/contest/787/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 44700545
Solution Time: 2018-10-22 17:38:45
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
	//freopen("input.txt", "r", stdin);
	IOS;

	int a,b,c,d,temp=0;
	cin>>a>>b>>c>>d;
	for(int i=b;i<=b+a*100;i+=a){
		for(int j=d;j<=d+c*100;j+=c){
			if(i==j) {temp=1; cout<<j; goto a;}
		}
	}
	a:
	if(temp==0) cout<<-1;
	return 0;
}