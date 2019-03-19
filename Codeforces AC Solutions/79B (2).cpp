/*
Problem Name: B - Colorful Field
Problem ID: 79B
Problem URL: https://codeforces.com/contest/79/problem/B
Author: Ashish Kumar (ashishkr23438)
Solution ID: 46651933
Solution Time: 2018-12-05 17:27:28
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
//#define endl &#39;\n&#39;

vector<pii> v;

bool sortbysec(const pii &a, const pii &b) {
    return (a.se < b.se);
}


signed main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif  
    //IOS;
    
    int n,m,k,t;
    cin>>n>>m>>k>>t;
    for (int i = 0; i < k; ++i)
    {
        int a,b;
        cin>>a>>b;
        v.pb({a,b});
    }
    sort(v.begin(),v.end(),sortbysec);
    sort(v.begin(),v.end());
    string arr[4]={"Grapes","Carrots","Kiwis","Waste"};
    for (int i = 0; i < t; ++i)
    {
        int a,b;
        cin>>a>>b;
        int c=-1;
        for(auto it:v) {
            c++;
            int s=0;
            if(a==it.fi && b==it.se) {cout<<arr[3]<<endl; break;}
            else if((a<it.fi)||(a==it.fi && b<it.se)) {
                
                s=(((a-1)%3*m%3)%3+b%3-c%3+3)%3;
                cout<<arr[s]<<endl;
                break;
            }
            else if(c+1==v.size()) {
                s=(((a-1)%3*m%3)%3+b%3-(c+1)%3+3)%3;
                cout<<arr[s]<<endl;
                break;
            }
        }
    }

    return 0;
}