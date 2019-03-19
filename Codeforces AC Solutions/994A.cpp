/*
Problem Name: A - Fingerprints
Problem ID: 994A
Problem URL: https://codeforces.com/contest/994/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 39325720
Solution Time: 2018-06-17 08:46:07
Language: GNU C++14
Time consumed: 31 ms
Memory consumed: 0 KB
*/
//#include<bits/stdc++.h>
#include<iostream>
using namespace std;

#define speed ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define vi vector < int >
#define pii pair < int , int >
#define ll long long int
#define all(c) c.begin(), c.end()
#define allr(c) c.rbegin(), c.rend()
#define tr(container, it) \
      for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)
#define present(container, element) (container.find(element) != container.end()) 
#define cpresent(container, element) (find(all(container),element) != container.end()) 
#define ss second
#define ff first
#define sz(a) int((a).size())
#define mp make_pair 
#define pb push_back 
#define endl "\n"
#define dbg(x) { cout<< #x << ": " << (x) << endl; }
#define dbg2(x,y) { cout<< #x << ": " << (x) << " , " << #y << ": " << (y) << endl; }


int main() {
	//freopen("input.txt", "r", stdin);
	speed;
	
	int n,m;
	cin>>n>>m;
	int a[n],b[m];
	for(int i=0;i<n;i++) {
		cin>>a[i];
	}
	for(int i=0;i<m;i++) {
		cin>>b[i];
	}
	for(int i=0;i<n;i++) {
		for(int j=0;j<m;j++) {
			if(a[i]==b[j]) cout<<a[i]<<" ";
		}
	}
	return 0;	

}