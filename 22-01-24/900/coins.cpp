#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    int total = 0;
    multiset<int,greater<int>> m;
    while(n--){
        int temp; cin>>temp;
        total += temp;
        m.insert(temp);
    }
    auto it = m.begin();
    int sum = *it;
    total -= *it;
    int cnt = 1;
    while(sum<=total){
        it++;
        sum += *it;
        total -= *it;
        cnt ++;
    }
    cout<<cnt<<"\n";
    return 0;
}