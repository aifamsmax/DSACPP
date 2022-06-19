#include <bits/stdc++.h>
using namespace std;
void input(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
}
void targetSumPair(vector<int> &arr, int target)
{
    //write your code here
    sort(arr.begin(),arr.end());
    int l=0,r=arr.size()-1;
    while(l<r)
    {
        if(arr[l]+arr[r]>target)
        r--;
        else if(arr[l]+arr[r]<target)
        l++;
        else
        {
            cout<<arr[l]<<", "<<arr[r]<<endl;
            l++,r--;
        }
        
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n, target;
    cin >> n;
    vector<int> vec(n, 0);
    input(vec);
    cin >> target;
    targetSumPair(vec, target);
    return 0;
}