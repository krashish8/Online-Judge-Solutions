/*
Problem Name: B - Berland National Library
Problem ID: 567B
Problem URL: https://codeforces.com/contest/567/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 39452118
Solution Time: 2018-06-21 08:42:35
Language: GNU C++14
Time consumed: 15 ms
Memory consumed: 3900 KB
*/
#include<bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<vector>
#include<sstream>
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
#define dbg(x) { cout<< #x << ": " << (x) << endl; }
#define dbg2(x,y) { cout<< #x << ": " << (x) << " , " << #y << ": " << (y) << endl; }
#define rep(i,a,b) for (int i = a; i <= b; i++)
#define exectime() cout<<"Execution Time: "<<(double)(clock() - tStart)/CLOCKS_PER_SEC<<endl;

#define INF 1e18;
#define PI 3.14159265359
#define EPS 1e-9
#define MOD 1000000007

int a[1000005];

int main() {
	//freopen("input.txt", "r", stdin);
	speed;
	//clock_t tStart = clock();

	int n;
	cin>>n;
	int sum=0,res=0;
	while(n--) {
		char c;
		cin>>c;
		int temp;
		cin>>temp;
		if(c==&#39;+&#39;) {
			a[temp]=1;
			sum++;
		}
		if(c==&#39;-&#39;) {
			if(a[temp]==1) {a[temp]=0; sum--;}
			else {res++;}
		}
		res=max(res,sum);

	}
	cout<<res;

}