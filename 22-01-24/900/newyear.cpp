#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t,n; cin>>t;
    while(t--){
        cin>>n;
        long long mul = 0;
        int check = 0;
        for(int i=0; i<n; i++){
            
            for(int j=0; j<n; j++){
                mul = 2020*i + 2021*j;
                if(mul==n){
                    cout<<"YES"<<"\n";
                    check = 1;
                    break;
                }
                if (mul >= n)
                    break;
            }
            if(check)break;
        }
        if(!check)
        cout<<"NO"<<"\n";
    }
    return 0;
}