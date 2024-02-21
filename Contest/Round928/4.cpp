#include <bits/stdc++.h>
using namespace std;

void solve()
{
}
string bin(long n)
{
    long i;
    string ans = "";
    for (i = 1 << 30; i > 0; i = i / 2)
    {
        if ((n & i) != 0)
        {
            ans += "1";
        }
        else
        {
            ans += "0";
        }
    }
    return ans;
}
string invertBits(long n)
{
    // Count number of bits
    long i;
    string ans = "";
    for (i = 1 << 30; i > 0; i = i / 2)
    {
        if ((n & i) != 0)
        {
            ans += "0";
        }
        else
        {
            ans += "1";
        }
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int cnt = 0;
        unordered_map<string, int> um;
        for (int i = 0; i < n; i++)
        {
            long temp;
            cin >> temp;
            string t = invertBits(temp);
            if (um[t] != 0)
            {
                cnt++;
                um[t]=um[t]-1;
                um[bin(temp)]--;
                //  cout << "binary:-  " << t << " " << invertBits(temp) << "\n";
            }
            um[bin(temp)]++;
        }
        cout << n - 2 * cnt+cnt << "\n";
    }
    return 0;
}