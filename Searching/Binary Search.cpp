//Binary Search
#include<bits/stdc++.h>
using namespace std;

bool BinarySearch(vector<int>arr , int val,int n)
{
    int low = 0;
    int high = n-1;
    
    while(low<=high)
    {
        int mid = low+(high-low)/2;
        if(arr[mid]==val)   return true;
        else if(arr[mid]<val)   low = mid+1;
        else    high=mid-1;
    }
    return false;
}

int main()
{
    int n; cin>>n;
    vector<int>arr(n);
    for(int i=0 ; i<n ; i++)    cin>>arr[i];
    int val; cin>>val;
    if(BinarySearch(arr,val,n))
        cout<<"Element found"<<endl;
    else
        cout<<"Element not found"<<endl;
    return 0;
}
