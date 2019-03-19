/*
Problem Name: A - Exam
Problem ID: 534A
Problem URL: https://codeforces.com/contest/534/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 44895562
Solution Time: 2018-10-26 09:26:45
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
#define mp make_pair
#define fi first
#define se second
#define mod 1000000007
#define inf 2e9+9
#define pii pair<int,int>
#define vi vector<int>
#define vii vector<pii>
#define mi map<int,int>
#define mii map<pii,int>
#define all(a) (a).begin(), (a).end()
#define sz(x) (int)x.size()
#define ubnd upper_bound()
#define bs binary_search()
#define endl "\n"
#define dbg(x) { cout<< #x << ": " << (x) << endl; }
#define dbg2(x,y) { cout<< #x << ": " << (x) << " , " << #y << ": " << (y) << endl; }
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

int main(){
	//freopen("input.txt", "r", stdin);
	IOS;

	int n;
	cin>>n;
	if(n==1) return (cout<<"1\n1",0);
	else if(n==2) return (cout<<"1\n1",0);
	else if(n==3) return (cout<<"2\n1 3",0);
	int j=2;
	cout<<n<<endl;
	
	while(j<=n) {
		cout<<j<<" ";
		j+=2;
	}
	int i=1;
	while(i<=n) {
		cout<<i<<" ";
		i+=2;
	}
	return 0;
}