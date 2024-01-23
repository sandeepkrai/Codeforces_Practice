#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n,k; cin>>n>>k;
    long long odd, even;
    if(n%2==0){
        odd = n/2;
        even = n/2;
    }
    else {
        odd = n/2+1;
        even = n/2;
    }
    if(k<=odd){
        cout<< 2*k-1<<"\n";
    }
    else{
        k-=odd;
        cout << 2 * k << "\n";

    }
    return 0;
}