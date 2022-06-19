#include <bits/stdc++.h>
using namespace std;
void input(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
}
int findpivot(vector<int> &arr)
{
    //write your code here
    int lo=0;
    int hi=arr.size()-1;
    while(lo<hi)
    {
        int mid=(lo+hi)/2;
        if(arr[mid]<arr[hi])
        hi=mid;
        else
        {
            lo=mid+1;
        }
    }
    return arr[hi];
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin >> n;
    vector<int> vec(n, 0);
    input(vec);
    int pivot = findpivot(vec);
    cout << pivot;
    return 0;
}