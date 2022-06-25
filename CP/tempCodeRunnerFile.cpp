#include<bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t;
    cin >> t;
    while(t--)
    {
       int x1,y1,x2,y2;
       cin>>x1>>y1>>x2>>y2;
        if( (abs(x1-x2)%2==1 ) and (abs(y1-y2)%2==1) and (max(abs(x1-x2),abs(y1-y2))<=4) )
        cout<<"YES"<<endl;
        else if((abs(x1-x2)%2==0)  and (abs(y1-y2)%2==0) and  (max(abs(x1-x2),abs(y1-y2))<=4))
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}