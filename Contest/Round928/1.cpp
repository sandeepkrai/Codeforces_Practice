#include <bits/stdc++.h>
using namespace std;

void solve()
{
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a; cin>>a;
        unordered_map<char,int> um;
        for(auto i:a)um[i]++;
        
        if(um['A']>um['B'])cout<<'A'<<"\n";
        else cout<<'B'<<"\n";
    }
    return 0;
}