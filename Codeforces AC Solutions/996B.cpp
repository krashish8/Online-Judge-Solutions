/*
Problem Name: B - World Cup
Problem ID: 996B
Problem URL: https://codeforces.com/contest/996/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 39671093
Solution Time: 2018-06-26 12:18:10
Language: GNU C++17
Time consumed: 327 ms
Memory consumed: 800 KB
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

int a[105];

int main() {
//	freopen("input.txt", "r", stdin);
	speed;
	
	int n;
	cin>>n;
	int a[n],b[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		int t=0;
		while(i+1+t*n<=a[i]) t++;
		b[i]=i+1+t*n;
	}
	int min=b[0];
	int pos=0;
	for(int i=n-1;i>=0;i--){
		if(min>=b[i]) {
			min=b[i];
			pos=i;
		}
	}
	
	cout<<pos+1;
	
}