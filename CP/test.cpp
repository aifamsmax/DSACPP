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
      int n;
      cin>>n;
      string s;
      cin>>s;
      int i=0,j=n-1;
      int res=0;
      while(i<=j)
      {
        if(s[i]=='(' and s[j]==')')i++,j--;
        else if(s[i]=='(' and s[j]=='(')res++,j--;
        else if(s[i]==')' and s[j]==')')res++,i++;
        else{
            i++;
            j--;
            res=res+2;
        }
      }
        cout<<res<<endl;
    }
    return 0;
}