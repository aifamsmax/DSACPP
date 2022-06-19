#include<bits/stdc++.h>
using namespace std;
int main()
{
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int r=4;
    int res=1;
    int n=10;
    for(int i=0;i<r;i++)
    {
        res *=(n-i);
        res /= (i+1);
    }
    cout<<res;
}

// dec = stoi(sub,0,2);

// isse na binary string 'sub' decimal me convert hoke dec me store ho jayegi 
// cool hai na