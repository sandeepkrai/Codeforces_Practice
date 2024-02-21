#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        long long ans = 0;
        for(int i=0; i<n; i++){
            int t; cin>>t;
            if(t<=ans){
                int mod = ans/t;
                ans = t*(mod+1);
            }
            else{
                ans = t;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}