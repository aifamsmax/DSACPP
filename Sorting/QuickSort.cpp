#include<bits/stdc++.h>

using namespace std;

int partition(vector<int> &arr, int pivot, int lo, int hi){
    cout << "pivot -> " << pivot << endl;
    int curr = lo;
    int prev = lo;
    while(curr <= hi){
        if(arr[curr] <= pivot){
            cout<<"Swapping " << arr[curr] << " and " << arr[prev] << endl;
            swap(arr[curr++],arr[prev++]);
        }
        else
        {
         curr++;   
        }
    }
    cout << "pivot index -> " << prev-1 << endl;
    return prev-1;
}

void quicksort(vector<int> &arr, int lo, int hi){
    // write your code here
    if(lo>hi)
    {
        return;
    }
    int pivot=arr[hi];
    int pi=partition(arr,pivot,lo,hi);
    quicksort(arr,lo,pi-1);
    quicksort(arr,pi+1,hi);
}

void Display(vector<int>& arr){
    for(int ele : arr){
        cout<< ele << " ";
    }
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n, 0);
    for(int i = 0; i < arr.size(); i++){
        cin >> arr[i];
    }
    quicksort(arr, 0, n - 1);
    Display(arr);
    return 0;
}