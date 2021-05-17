#include<bits/stdc++.h>
using namespace std;

void BubbleSort(vector<int>&arr , int n)
{
    //no of passes = n-1
    for(int i=0 ; i<n-1 ; i++)  //for passes
    {
        for(int j=0; j<(n-i-1) ; j++)  //for comparision
        {
            if(arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]);
        }
    }
    
}


void print(vector<int>&arr,int n)
{
    for(int i=0 ; i<n ; i++)
    cout<<arr[i]<<" ";
}

int main()
{
    int n;  cin>>n;
    vector<int>arr(n);
    for(int i=0 ; i<n ; i++)    cin>>arr[i];
    BubbleSort(arr,n);
    print(arr,n);
    return 0;
}
