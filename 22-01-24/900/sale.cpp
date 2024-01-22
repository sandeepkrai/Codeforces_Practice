#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m; cin>>n>>m;
    multiset<int> ms;
    int ans = 0;
    while(n--){
        int temp; cin>>temp;
        ms.insert(temp);
    }
    for(auto& i:ms){
        if(i>=0 || m==0)break;
        m--;
        ans += i;
    }
    cout<<-ans<<"\n";
    return 0;
}