#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    vector<int> ans;
    if(n==1){
        cout<<1<<"\n";
        return 0;
    }
    if(n<4){
        cout<<"NO SOLUTION\n";
        return 0;
    }
    for (int i = 2; i <= n; i += 2)
        ans.push_back(i);
    for(int i=1; i<=n; i+=2)ans.push_back(i);
    
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}