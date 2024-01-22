#include <bits/stdc++.h>
using namespace std;

int main()
{
    string in; cin>>in;
    for(int i=0; i<in.size();){
        int cnt = 1;
        int j = i+1;
        while(j<in.size() && in[i]==in[j]){
            j++;
            cnt++;
        }
        if(cnt>=7){
            cout<<"YES"<<"\n";
            return 0;
        }
        i = j;
    }
    cout<<"NO"<<"\n";
    return 0;
}