/*
Problem Name: B - Delete from the Left
Problem ID: 1005B
Problem URL: https://codeforces.com/contest/1005/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 40252229
Solution Time: 2018-07-13 09:54:22
Language: GNU C++11
Time consumed: 31 ms
Memory consumed: 700 KB
*/
#include<iostream>
#include<cmath>
#include<vector>
#include<string>
#include<set>
#include<algorithm>
#include <iomanip> 
//#include<bits/stdc++.h>
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

#define INF 1e18;
#define EPS 1e-9
#define MOD 1000000007


int main() {
 //   freopen("input.txt", "r", stdin);
    speed;
    
    string s,t;
    cin>>s>>t;
    int l1=s.length(),l2=t.length();
    int c=0;
    int i=l1-1;
    int j=l2-1;
    for(;i>=0,j>=0;i--,j--) {
        if(s[i]==t[j]) {
            c++;
        }
        else
            goto a;
    }
    a:
    cout<<l1+l2-2*c;;
}