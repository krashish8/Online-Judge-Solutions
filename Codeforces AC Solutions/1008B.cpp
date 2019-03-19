/*
Problem Name: B - Turn the Rectangles
Problem ID: 1008B
Problem URL: https://codeforces.com/contest/1008/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 40270014
Solution Time: 2018-07-13 17:49:17
Language: GNU C++11
Time consumed: 124 ms
Memory consumed: 1200 KB
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
    int a[n],b[n],c[n];
    for(int i=0;i<n;i++) {
        cin>>a[i]>>b[i];
        if(i==0) {
        if(a[0]<b[0]) c[0]=b[0];
        else c[0]=a[0];
        continue;}
        if(max(a[i],b[i])<=c[i-1]) c[i]=max(a[i],b[i]);
        else if(min(a[i],b[i])<=c[i-1]) c[i]=min(a[i],b[i]);
        else {cout<<"NO";return 0;}

    }
    cout<<"YES";
}