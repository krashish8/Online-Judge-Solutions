/*
Problem Name: A - Boredom
Problem ID: 455A
Problem URL: https://codeforces.com/contest/455/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 39689676
Solution Time: 2018-06-27 06:05:00
Language: GNU C++17
Time consumed: 46 ms
Memory consumed: 1600 KB
*/
#include<iostream>
#include<cmath>
#include<vector>
#include<string>
#include<set>
#include<algorithm>
using namespace std;


typedef vector<int> vi;
typedef pair<int,int> pi;
typedef long long int ll;

#define speed ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define all(c) c.begin(), c.end()
#define allr(c) c.rbegin(), c.rend()
#define present(container, element) (container.find(element) != container.end()) 
#define cpresent(container, element) (find(all(container),element) != container.end()) 
#define se second
#define fi first
#define sz(a) int((a).size())
#define mp make_pair 
#define pb push_back 
#define endl "\n"
#define dbg(x) { cout<< #x << ": " << (x) ; }
#define dbg2(x,y) { cout<< #x << ": " << (x) << " , " << #y << ": " << (y) << endl; }

#define INF 1e18;
#define EPS 1e-9
#define MOD 1000000007



int main() {
//	freopen("input.txt", "r", stdin);
	speed;
	
	long long int a[100005]={0}, dp[100005]={0};
	int n,p;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>p;
		a[p]++;
	}
	dp[0]=0;
	dp[1]=a[1];
	for(int i=2;i<=100000;i++){
		dp[i]=max(dp[i-1],dp[i-2]+a[i]*i);
	}
	cout<<dp[100000];

}