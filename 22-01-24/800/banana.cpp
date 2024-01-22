#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long ans = 0;
    int k,n,w; cin>>k>>n>>w;
    ans = (w*(w+1))/2;
    ans *= k;
    ans -= n;
    ans<0?ans=0:ans=ans;
    cout<<ans<<"\n";
    return 0;
}