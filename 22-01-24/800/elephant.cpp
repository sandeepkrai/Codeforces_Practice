#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n; cin>>n;

    int ans = 0;
    if(n>=5){
        int temp = n/5;
        ans += temp;
        n = n-temp* 5;
    }
    if (n >= 4)
    {
        int temp = n / 4;
        ans += temp;
        n = n-temp* 4;
    }
    if (n >= 3)
    {
        int temp = n / 3;
        ans += temp;
        n = n-temp* 3;
    }
    if (n >= 2)
    {
        int temp = n / 2;
        ans += temp;
        n = n-temp* 2;
    }
    if (n >= 1)
    {
        int temp = n / 1;
        ans += temp;
        n = n-temp* 1;
    }
    cout<<ans<<"\n";
    return 0;
}