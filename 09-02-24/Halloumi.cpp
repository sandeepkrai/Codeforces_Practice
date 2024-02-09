#include <bits/stdc++.h>
using namespace std;

// Theofanis is busy after his last contest, as now, he has to deliver many halloumis all over the world.He stored them inside n boxes and each of which has some number ai written on it.

// He wants to sort them in non -
// decreasing order based on their number,
// however, his machine works in a strange way.It can only reverse any subarray† of boxes with length at most k.

//                  Find if it's possible to sort the boxes using any number of reverses.

// † Reversing a subarray means choosing two indices i and
//                  j(where 1≤i≤j≤n) and
//                  changing the array a1,
//     a2,…, an to a1, a2,…, ai−1, aj, aj−1,…, ai, aj + 1,…, an−1, an.The length of the subarray is then j−i + 1 .

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        if (is_sorted(arr, arr + n) || k > 1)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}