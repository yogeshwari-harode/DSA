//BinarySearch
#include<bits/stdc++.h>
using namespace std;

int BinarySearch(vector<int>&arr , int n , int x)
{
    int l=0;
    int h=n-1;
    while(l<=h)
    {
        int mid=l+(h-l)/2;
        if(arr[mid]==x)
        return mid;
        else if(arr[mid]<x)
        l=mid+1;
        else
        h=mid;
    }
    return -1;
}

int main()
{
    int n;    cin>>n;
    vector<int>arr(n);
    for(int i=0 ; i<n ; i++)
        cin>>arr[i];
    int x;  cin>>x;
        
    int result = BinarySearch(arr,n,x);
    if(result==-1)
    cout<<"Element is not present in the array";
    else
    cout<<"Element is present at index "<<result;
    
    return 0;
}
