#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            arr.push_back(temp);
        }
        int start = 1, end = 1;
        for (int i = 1; i < n; i++)
        {
            if (arr[i] != arr[i - 1])
                break;
            start++;
        }
        for (int i = n - 2; i >= 0; i--)
        {
            if (arr[i] != arr[i + 1])
                break;
            end++;
        }
        if (arr[0] == arr[n - 1])
        {
            if (start + end > n)
            {
                cout << 0 << "\n";
                // break;
            }
            else
            {
                cout << n - (start + end) << "\n";
                // break;
            }
        }
        else
        {
            int maxi = max(start, end);
            cout << n - maxi << "\n";
        }
    }
    return 0;
}