#include <bits/stdc++.h>
using namespace std;

int fn(string s, int n, int ind, vector<int>& dp)
{
    if(ind>=n  || s[ind]=='*')return 0;
    if(dp[ind]!=-1)return dp[ind];
    int cur = 0;
    if(s[ind]=='@')cur = 1;
    int a = cur + fn(s,n,ind+1, dp);
    int b = cur + fn(s,n,ind+2, dp);
    return dp[ind] = max(a,b);
}

int main()
{
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string s; cin>>s;
        vector<int> a1(n+1,-1);
        vector<int> a2(n + 1, -1);

        int ans = max(fn(s, n, 0, a1), fn(s, n, 1, a2));
        cout << ans <<"\n";
    }
    return 0;
}