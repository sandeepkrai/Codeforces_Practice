#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a= 1, b=1, c=1;
        n -= 3;
        if(n>=25){
            c+=25;
            n-=25;
        }
        else{
            c+=n;
            n = 0;
        }
        if (n >= 25)
        {
            b += 25;
            n -= 25;
        }
        else{
            b += n;
            n = 0;
        }
        int x = int('a')-1;
        a+=n;
        string ans = "";
        ans += char(x+a);
        ans += char(x+b);
        ans += char(x+c);
        cout<<ans<<"\n";
    }
    return 0;
}