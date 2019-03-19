/*
Problem Name: C - Intense Heat
Problem ID: 1003C
Problem URL: https://codeforces.com/contest/1003/problem/C
Author: Ashish Kumar (ashishkr23438)
Solution ID: 39930339
Solution Time: 2018-07-03 20:11:01
Language: GNU C++11
Time consumed: 93 ms
Memory consumed: 300 KB
*/
#include<iostream>
#include<cmath>
#include<vector>
#include<string>
#include<set>
#include<algorithm>
#include <iomanip> 
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

int findMaxAverage(int arr[], int n, int k)
{
    // Check if &#39;k&#39; is valid
    if (k > n)
        return -1;
 
    // Create and fill array to store cumulative
    // sum. csum[i] stores sum of arr[0] to arr[i]
    int *csum = new int[n];
    csum[0] = arr[0];
    for (int i=1; i<n; i++)
       csum[i] = csum[i-1] + arr[i];
 
    // Initialize max_sm as sum of first subarray
    int max_sum = csum[k-1], max_end = k-1;
 
    // Find sum of other subarrays and update
    // max_sum if required.
    for (int i=k; i<n; i++)
    {
        int curr_sum = csum[i] - csum[i-k];
        if (curr_sum > max_sum)
        {
            max_sum = curr_sum;
            max_end = i;
        }
    }
 
    delete [] csum; // To avoid memory leak
 
    // Return starting index
    int cn=0,sm=0;
    for (int i=max_end - k + 1; cn!=k; )
    {
        sm+=arr[i];
        cn++;
        i++;
    }
    return sm;
}

int main() {
    //freopen("input.txt", "r", stdin);
    speed;
    
    int n,k;
    cin>>n>>k;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
        cin>>a[i];
    }
    double mx=0;
    for (;k!=n+1;)
    {
        int te=findMaxAverage(a,n,k);
        if(te/(double)k > mx) mx=te/(double)k;
        k++;
    }
    cout<<std::setprecision(20)<<mx;

}