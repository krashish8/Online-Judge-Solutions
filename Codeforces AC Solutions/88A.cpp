/*
Problem Name: A - Chord
Problem ID: 88A
Problem URL: https://codeforces.com/contest/88/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46657854
Solution Time: 2018-12-05 20:21:38
Language: GNU C++14
Time consumed: 62 ms
Memory consumed: 0 KB
*/
#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define mod 1000000007
#define pb push_back
#define pii pair<int,int>
#define fi first
#define se second
#define rep(i,a,b) for(int i=a;i<b;++i)
#define dbg(x) { cout<< #x << ": " << (x) << endl; }
#define dbg2(x,y) { cout<< #x << ": " << (x) << " , " << #y << ": " << (y) << endl; }
#define eps 0.0000001
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define endl &#39;\n&#39;



signed main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif  
    IOS;
    
    string a[3];
    cin>>a[0]>>a[1]>>a[2];
    map<string,int> m;
    m["C"]=0;
    m["C#"]=1;
    m["D"]=2;
    m["D#"]=3;
    m["E"]=4;
    m["F"]=5;
    m["F#"]=6;
    m["G"]=7;
    m["G#"]=8;
    m["A"]=9;
    m["B"]=10;
    m["H"]=11;
    if(m[a[0]]>m[a[1]] && m[a[0]]>m[a[2]]) swap(a[0],a[2]);
    if(m[a[1]]>m[a[0]] && m[a[1]]>m[a[2]]) swap(a[1],a[2]);
    if(m[a[1]]<m[a[0]] && m[a[1]]<m[a[2]]) swap(a[1],a[0]);
    if(m[a[2]]<m[a[0]] && m[a[2]]<m[a[1]]) swap(a[1],a[2]);
    
    
    if(((m[a[1]]-m[a[0]]+12)%12==3 && (m[a[2]]-m[a[1]]+12)%12==4)
        || ((m[a[2]]-m[a[1]]+12)%12==3 && (m[a[0]]-m[a[2]]+12)%12==4)
        || ((m[a[0]]-m[a[2]]+12)%12==3 && (m[a[1]]-m[a[0]]+12)%12==4))
        cout<<"minor";
    else if(((m[a[1]]-m[a[0]]+12)%12==4 && (m[a[2]]-m[a[1]]+12)%12==3)
        || ((m[a[2]]-m[a[1]]+12)%12==4 && (m[a[0]]-m[a[2]]+12)%12==3)
        || ((m[a[0]]-m[a[2]]+12)%12==4 && (m[a[1]]-m[a[0]]+12)%12==3))
        cout<<"major";
    else
        cout<<"strange";
    return 0;
}