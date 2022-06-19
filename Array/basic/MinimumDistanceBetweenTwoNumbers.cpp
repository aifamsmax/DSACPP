// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
  public:
    int minDist(int a[], int n, int x, int y) {
        // code here
        int b=-1,c=-1,d=INT_MAX;
        
        for(int i=0;i<n;i++)
        {
            if(a[i]==x)
            b=i;
            if(a[i]==y)
            c=i;
            if(b>=0 and c>=0)
            {
                d=min(d,abs(b-c));
            }
        }
        return d==INT_MAX?-1:d;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        int x, y;
        cin >> x >> y;
        Solution obj;
        cout << obj.minDist(a, n, x, y) << endl;
    }
    return 0;
}
  // } Driver Code Ends