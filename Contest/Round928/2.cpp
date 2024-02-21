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
        int n; cin>>n;
        bool check = true;
        int prev = 0, cur = 0;
        for(int i=0; i<n; i++){
            
            for(int j=0; j<n; j++){
                char temp; cin>>temp;
                if(temp=='1')cur++;
            }
            if(prev!=0 && check){
                if(prev==cur)cout<<"SQUARE\n";
                else cout<<"TRIANGLE\n";
                check = false;
            }
            else {
                prev = cur;
                cur = 0;
            }
        }
    }
    return 0;
}