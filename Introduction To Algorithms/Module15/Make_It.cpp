#include <bits/stdc++.h>
using namespace std;

int dp[100005];

bool can_reach(int current, int target)
{
    if (current == target)
        return true;
    if (current > target)
        return false;

    if (dp[current] != -1)
        return dp[current];

    bool op1 = can_reach(current + 3, target);
    bool op2 = can_reach(current * 2, target);

    return dp[current] = (op1 || op2);
}

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        for (int i = 1; i <= n; i++)
        {
            dp[i] = -1;
        }

        if (can_reach(1, n))
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}