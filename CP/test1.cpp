#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
#define mod 1000000007
int arrayfib[101][1000001];
void fibonacci() {
    int i=0;
    while(i <= 100) {
        arrayfib[i][1] = i;
        arrayfib[i][2] = 2*i;
        int c = i;
        int s = 2*i;
        for(int j = 3; j <= 100000; j++) {
            c = (c * 2) % mod;
            s = (s + c) % mod;
            arrayfib[i][j] = s;
        }
        i++;
    }
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    
    int t;
    cin >> t;
    fibonacci();
    while (t--)
    {
          int n, x;
            cin>>n>>x;
            cout<<arrayfib[x][n]<<endl;
    }
    return 0;
}