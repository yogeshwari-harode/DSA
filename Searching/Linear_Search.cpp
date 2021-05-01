#include<bits/stdc++.h>
using namespace std;

bool LinearSearch(vector<int>&arr ,int n , int val )
{
    for(int i=0 ; i<n ; i++)
    {
        if(val==arr[i])
        {
            return true;
            break;
        }
    }
    return false;
}

int main()
{
    int n; cin>>n;
    vector<int>arr(n);
    for(int i=0 ; i<n ; i++)    cin>>arr[i];
    int val; cin>>val;
    if(LinearSearch(arr,n,val))
        cout<<"Element found"<<endl;
    else
        cout<<"Element not found"<<endl;
    return 0;
}
