#include<bits/stdc++.h>
using namespace std;

void printNewArray(vector<int>&a, vector<int>&b,int n)
{
    for(int i=0;i<n;i++)
    {
        cout << b[i] << " ";

    }
    for(int i=0; i<n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
int main()
{
    int n;
    cin >> n;
    vector <int> a(n);
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }

    vector <int> b(n);
    for(int i=0;i<n;i++)
    {
        cin >> b[i];
    }

   printNewArray(a,b,n);
    

   
    return 0;
}