/*
Problem Name: C - Sonya and Robots
Problem ID: 1004C
Problem URL: https://codeforces.com/contest/1004/problem/C
Author: Ashish Kumar (ashishkr23438)
Solution ID: 40000566
Solution Time: 2018-07-05 20:35:06
Language: GNU C++11
Time consumed: 78 ms
Memory consumed: 1600 KB
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

int a[100005],b[100005],c[100005],d[100005];

set<int> ss;

int main() {
   // freopen("input.txt", "r", stdin);
    speed;
    
    int n;
    cin>>n;
    int s=0;
    for (int i = 0; i < n; ++i)
    {
        cin>>a[i];
        b[a[i]]++;
        if(b[a[i]]==1)
        {
            s++;
        }
        c[i]=s;
    }
    ll sm=0;
    for (int i = n-1; i >0; --i)
    {
        if(d[a[i]]==1) continue;
        d[a[i]]=1;
        
        sm+=c[i-1];
    }
    cout<<sm;
}