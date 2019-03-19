/*
Problem Name: A - Nastya and an Array
Problem ID: 992A
Problem URL: https://codeforces.com/contest/992/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 39363672
Solution Time: 2018-06-18 19:43:29
Language: GNU C++14
Time consumed: 78 ms
Memory consumed: 3300 KB
*/
//#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<Set>
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
	
	int n;
	cin>>n;
	set<int> a;
	for(int i=0;i<n;i++) {
		int b;
		cin>>b;
		a.insert(b);
	}
	int c=0;
	
	cout<<a.size()-a.count(0);
	return 0;	

}