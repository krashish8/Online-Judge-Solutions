/*
Problem Name: B - Binary String Constructing
Problem ID: 1003B
Problem URL: https://codeforces.com/contest/1003/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 39916155
Solution Time: 2018-07-03 18:44:19
Language: GNU C++17
Time consumed: 30 ms
Memory consumed: 300 KB
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
	
	int a,b,x,c=0,c0=0,c1=0,ch;
	cin>>a>>b>>x;
	int ta=a,tb=b;
	char a1=&#39;0&#39;,b1=&#39;1&#39;;
	int tem=0;
	if(a>b) {
		int te=a;
		a=b;
		b=te;
		a1=&#39;1&#39;;
		b1=&#39;0&#39;;
		tem=1;
	}
	int te=0;
	string s="";
	for (int i = 0; i < ta+tb; ++i)
	{
		if(x==1) {
			if(s!="") {
				if(s[s.length()-1]==&#39;0&#39;) {
					if(tem==0) {
						while(a){
							a--;
							cout<<a1;
						}
						while(b){
							b--;
							cout<<b1;
						}
						return 0;
					}
					if(tem==1) {
						while(b){
							b--;
							cout<<b1;
						}
						while(a){
							a--;
							cout<<a1;
						}
						
						return 0;
					}
				}
				if(s[s.length()-1]==&#39;1&#39;) {
					if(tem==0) {
						while(b){
							b--;
							cout<<b1;
						}
						while(a){
							a--;
							cout<<a1;
						}
						
						return 0;
					}
					if(tem==1) {
						while(a){
							a--;
							cout<<a1;
						}
						while(b){
							b--;
							cout<<b1;
						}
						return 0;
					}

				}
			}
			while(b)
			{cout<<b1;b--; ++i;}
			while(a)
			{cout<<a1;a--;++i;}
		}
		else {
			for (int j = 0; j < x; ++j)
			{
				if(te==0)
				{
					s+=b1;
					te=1;
					b--;
				}
				else
				{
					s+=a1;
					te=0;
					a--;
				}
			}
			cout<<s;
			i+=x-1;
			x=1;
		}
	}

}