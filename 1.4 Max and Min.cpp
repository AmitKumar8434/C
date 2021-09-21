#include <stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int arr[20];
    int i, max, min, size;
    cout<<"Enter size of the array: ";
    cin>>size;
    cout<<"Enter elements in the array: ";
    for(i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    max = arr[0];
    min = arr[0];
    for(i=1; i<size; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout<<"  Maximum element =  "<<max;
    cout<<" \n Minimum element =   "<< min;
    return 0;
}

