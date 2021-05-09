#include<bits/stdc++.h>
using namespace std;

int BinarySearch( vector<int>&arr , int l , int h , int x)
{
   
    while(l<=h)
    {
        int mid=l+(h-l)/2;
        if(arr[mid]==x) return mid;
        if(arr[mid]<x)  return BinarySearch(arr , mid+1, h , x);
        else
        return BinarySearch(arr , l , mid-1 , x);
    }
    return 0 ;
}
int main()
{
    int n;  cin>>n;
    vector<int>arr(n);
    for(int i=0 ; i<n ; i++)
    cin>>arr[i];
    int x;  cin>>x;
    int result = BinarySearch(arr ,0,n-1, x);
    (result == -1) ? cout<<"Element is not present in the array" : cout<<"Element is found at index "<<result;
    return 0; 
}
