/*
Problem Name: A - Ksenia and Pan Scales
Problem ID: 382A
Problem URL: https://codeforces.com/contest/382/problem/A
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46549368
Solution Time: 2018-12-03 19:53:30
Language: GNU C++14
Time consumed: 31 ms
Memory consumed: 0 KB
*/
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 1000000007
#define inf 2e9+9
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define pi pair<int,int>
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
    
    string s,t;
    cin>>s>>t;
    string ans;
    string l=s.substr(0,s.find("|"));
    string r=s.substr(s.find("|")+1);
    int l1=l.length(),l2=r.length();
    if((l1+l2+t.length())%2!=0 || abs(l1-l2)>t.length()) return(cout<<"Impossible",0);
    if(l1+t.length()==l2) {
        cout<<s.substr(0,s.find("|"))+t+"|"+s.substr(s.find("|")+1);
    }
    else if(l1==l2+t.length()) {
        cout<<s.substr(0,s.find("|"))+"|"+s.substr(s.find("|")+1)+t;
    }
    else {
        int len = (abs(l1-l2));;
        if(l1<l2) {
            ans = t.substr(0,len)+s;
        }
        else {
            ans=s+t.substr(0,len);
        }
        ans=t.substr(len,(t.length()-len)/2)+ans+t.substr(len+(t.length()-len)/2);
        cout<<ans;
    }

    return 0;
}