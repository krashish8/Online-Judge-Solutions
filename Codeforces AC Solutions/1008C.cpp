/*
Problem Name: C - Reorder the Array
Problem ID: 1008C
Problem URL: https://codeforces.com/contest/1008/problem/C
Author: Ashish Kumar (ashishkr23438)
Solution ID: 40280404
Solution Time: 2018-07-13 18:23:30
Language: GNU C++11
Time consumed: 77 ms
Memory consumed: 400 KB
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
   // freopen("input.txt", "r", stdin);
    speed;
    
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    sort(a,a+n);
    int c=0,d=1;
    for(int i=0;i<n-d;) {
        if(a[i]<a[i+d]) {c++;i++;}
        else d++;
    }
    cout<<c;

}