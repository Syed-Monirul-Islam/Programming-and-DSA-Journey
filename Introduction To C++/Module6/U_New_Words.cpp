#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s;
   cin >> s;
   int e=0,g=0, y=0,p=0,t=0;

   for(char c : s)
   {
    if( c=='e' || c == 'E') e++;
    else if( c=='g' || c == 'G') g++;
    else if( c=='y' || c == 'Y') y++;
    else if( c=='p' || c == 'P') p++;
    else if( c=='t' || c == 'T') t++;
   }

   int ans = min({e,g,y,p,t});

   cout << ans << endl;
    return 0;
}