#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    long long int max1 = -1, max2 = -1;
    int idx1 = -1, idx2 = -1;

    for (int i = 0; i < n; i++)
    {
        long long int val;
        cin >> val;

        if (val > max1)
        {
            max2 = max1;
            idx2 = idx1;
            max1 = val;
            idx1 = i;
        }
        else if (val > max2)
        {
            max2 = val;
            idx2 = i;
        }
    }

   
    int left_idx = min(idx1, idx2);
    int right_idx = max(idx1, idx2);

    cout << left_idx << " " << right_idx << "\n";
}

int main()
{
   
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}