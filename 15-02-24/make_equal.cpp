#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        long long avg = 0;
        long long sum = 0;
        vector<int> temp;
        while(n--){
            int t; cin>>t;
            sum += t;
            temp.push_back(t);
        }
        n = temp.size();
        avg = sum/n;
        long long extra = 0;
        bool check = true;
        for(auto i : temp){
            if(i>avg){
                extra += i-avg;
            }
            else{
                if(extra<(avg-i)){
                    cout<<"NO\n";
                    check = false;
                    break;
                }
                else{
                    extra-=(avg-i);
                }
            }
        }
        if(check)
        cout<<"YES\n";
    }
    return 0;
}