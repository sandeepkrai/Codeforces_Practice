#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n; cin>>n;
    vector<long long> temp;
    long long ans = 0;
    for(int i=0; i<n; i++){
        int t; cin>>t;
        temp.push_back(t);
    }
    for(int i=1; i<n; i++){
        if(temp[i]<temp[i-1]){
            ans += abs(temp[i]-temp[i-1]);
            temp[i] = temp[i-1];
        }
    }
    cout<<ans<<"\n";
    return 0;
}