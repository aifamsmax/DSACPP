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
        int n,m;
        cin>>n>>m;
        vector<vector<int>> vec(n, vector<int> (m, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>vec[i][j];
            }
        }
        int x,y;
        int max_element=INT_MIN;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(vec[i][j]>max_element)
                {
                    max_element=vec[i][j];
                    x=i;
                    y=j;
                }
            }
        }
        x++;
        y++;
        cout<<max(n-x+1,x)*max(m-y+1,y)<<endl;
    }
    return 0;
}