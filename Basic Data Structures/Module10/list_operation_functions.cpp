#include<bits/stdc++.h>
using namespace std;
int main()
{
   list<int> l= {10,5,60,55,15,20,10,40, 20,50,30,10};
   l.remove(5);
   l.sort();
   l.unique();
   l.reverse();
   for(int val: l)
   {
    cout << val << endl;
   }

    return 0;
}