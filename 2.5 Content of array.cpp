#include <bits/stdc++.h> 
using namespace std;

int findContent(int arr[], int n) 
{ 
    int content = arr[0]; 
    for (int i = 1; i < n; i++) 
    {
        content =__gcd(content, arr[i]); 
    } 
  
    return content; 
} 
int main() 
{ 
    int n,arr[100];
    cout<<"size of array: ";
    cin>>n;
    cout<<"Enter elements : ";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout << "GCD ="<<findContent(arr, n); 
    return 0; 
}
