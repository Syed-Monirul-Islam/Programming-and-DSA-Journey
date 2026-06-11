#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >>t;
    while(t--)
    {
        int n;
        cin >> n;
    
        int *a= new int[n];
        int even_cnt=0, odd_cnt=0;
        for(int i=0;i<n; i++)
        {
            cin >> a[i];
            if(a[i] %2 ==0) even_cnt++;
            else odd_cnt++;
        }

        if(n % 2!=0)
        {
            cout << -1 << endl;
        }
        else
        {
           int ans = abs(even_cnt - odd_cnt)/2;
           cout << ans << endl;

        }
    }
   
    return 0;
}