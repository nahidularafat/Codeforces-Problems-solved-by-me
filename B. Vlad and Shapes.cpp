#include <bits/stdc++.h>
#define nl '\n'
#define yes (cout << "YES\n")
#define no (cout << "NO\n")
#define yy (cout << "Yes\n")
#define nn (cout << "No\n")
#define ll long long
#define pb push_back
#define pii pair<int, int>
#define pll pair<long long, long long>
#define rev(a) reverse(a, a + n);
#define Srev(s) reverse(s.begin(), s.end());
#define sz(s) s.size()
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main() {
    FIO
    int t;
    cin >> t;
    while (t--)
    {
       int n;
       cin>>n;
       string s[n];
       for(int i=0;i<n;i++)
       {
           cin>>s[i];
       }
       bool c= false;
       for(int i=0;i<n;i++)
       {
        int m = count(s[i].begin(),s[i].end(),'1');
        if( m==1)
        {
            c= true;
            break;
        }

       }
       if (c)
        cout<<"TRIANGLE"<<nl;
       else
        cout<<"SQUARE"<<nl;


    }
    return 0;
}
