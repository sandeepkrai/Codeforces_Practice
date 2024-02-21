#include <bits/stdc++.h>
using namespace std;

int gcdExtended(int a, int b, int *x, int *y);

// Function to find modulo inverse of b. It returns
// -1 when inverse doesn't
int modInverse(int b, int m)
{
    int x, y; // used in extended GCD algorithm
    int g = gcdExtended(b, m, &x, &y);

    // Return -1 if b and m are not co-prime
    if (g != 1)
        return -1;

    // m is added to handle negative x
    return (x % m + m) % m;
}

// Function to compute a/b under modulo m
void modDivide(int a, int b, int m)
{
    a = a % m;
    int inv = modInverse(b, m);
    if (inv == -1)
        cout << "Division not defined";
    else
        cout << "Result of division is " << (inv * a) % m;
}

// C function for extended Euclidean Algorithm (used to
// find modular inverse.
int gcdExtended(int a, int b, int *x, int *y)
{
    // Base Case
    if (a == 0)
    {
        *x = 0, *y = 1;
        return b;
    }

    int x1, y1; // To store results of recursive call
    int gcd = gcdExtended(b % a, a, &x1, &y1);

    // Update x and y using results of recursive
    // call
    *x = y1 - (b / a) * x1;
    *y = x1;

    return gcd;
}

int main()
{   
    int t; cin>>t;
    while(t--){
        int n,m; cin>>n>>m;
        long long mul = 1;
        vector<int> ar;
        for(int i=0; i<n; i++){
            int t; cin>>t;
            mul *= t;
            mul = mul%m;
            ar.push_back(t);
        }
        string s;
        cin >> s;
        cout<<mul;
        int l = 0, r = n-1;
        
        for(int i=0; i<s.size(); i++){
            int temp;
            if(s[i]='R'){
                temp = ar[r--];
                cout<<" "<<modInverse(temp,m);
                mul= modInverse(temp, m);
            }
            else{
                temp = ar[l++];
                cout << " " << modInverse(temp, m);
                mul = modInverse(temp, m);
            }
        } 
        cout<<"\n";
    }
    return 0;
}