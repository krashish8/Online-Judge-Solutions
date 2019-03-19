/*
Problem Name: B - Colorful Field
Problem ID: 79B
Problem URL: https://codeforces.com/contest/79/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46653845
Solution Time: 2018-12-05 18:18:07
Language: GNU C++14
Time consumed: 62 ms
Memory consumed: 100 KB
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

vector<pii> v;


signed main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif  
    IOS;
    
    int n,m,k,t;
    cin>>n>>m>>k>>t;
    for (int i = 0; i < k; ++i)
    {
        int a,b;
        cin>>a>>b;
        v.pb({a,b});
    }
    sort(v.begin(),v.end());
    string arr[4]={"Grapes","Carrots","Kiwis","Waste"};
    for (int i = 0; i < t; ++i)
    {
        int a,b;
        cin>>a>>b;
        int xx = lower_bound(v.begin(),v.end(),make_pair(a,b))-v.begin();
        xx = (a-1)*m+b-1-xx;
        int yy = lower_bound(v.begin(),v.end(),make_pair(a,b+1))-v.begin();
        yy = (a-1)*m+b-yy;
        if(xx==yy) {
            cout<<"Waste\n";
        }
        else if(xx%3==0) {
            cout<<"Carrots\n";
        }
        else if(xx%3==1)
            cout<<"Kiwis\n";
        else if(xx%3==2)
            cout<<"Grapes\n";
    }

    return 0;
}