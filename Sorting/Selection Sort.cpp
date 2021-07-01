#include<bits/stdc++.h>
using namespace std;

void display(vector<int>&arr, int n) {
   for(int i = 0; i<n; i++)
      cout << arr[i] << " ";
   cout << endl;
}

void selectionSort(vector<int>&arr, int n) {
   
   for(int i = 0; i<n-1; i++) 
   {
        int min = i; 
        for(int j = i+1; j<n; j++)
         if(arr[j] < arr[min])
            min = j;
         swap(arr[i], arr[min]);
         display(arr, n);
   }
}
int main() {
   int n;
   cout << "Enter the size of the Array : ";
   cin >> n;
   vector<int>arr(n);          //create an array with given number of elements
   cout << "Enter elements : " << endl;
   for(int i = 0; i<n; i++)     cin >> arr[i];

   cout << "Array before Sorting: ";
   display(arr, n);
   selectionSort(arr, n);
   cout << "Array after Sorting: ";
   display(arr, n);
return 0;
}
