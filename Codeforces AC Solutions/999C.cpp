/*
Problem Name: C - Alphabetic Removals
Problem ID: 999C
Problem URL: https://codeforces.com/contest/999/problem/C
Author: Ashish Kumar (ashishkr23438)
Solution ID: 39496817
Solution Time: 2018-06-21 20:51:44
Language: GNU C++14
Time consumed: 46 ms
Memory consumed: 1400 KB
*/
#include<iostream>
#include<cmath>
#include<vector>
#include<sstream>
#include<string>
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
#define PI 3.14159265359
#define EPS 1e-9
#define MOD 1000000007

const int N = 404040;

bool a[N];

int main() {
	//freopen("input.txt", "r", stdin);
	speed;
	
	int n,k;
	cin>>n>>k;
	string s;
	cin>>s;

	for(int i=0;i<26 && k>0;i++) {
		for(int j=0;j<n && k>0;j++) {
			if(s[j]==i+&#39;a&#39;)
			{
				a[j]=1;
				k--;
			}
		}
	}
	for(int j=0;j<n;j++) {
		if(!a[j])
		cout<<s[j];
	}
}