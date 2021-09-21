#include<bits/stdc++.h>
#include "Linked list.cpp"
using namespace std;
void sortedMerge(Linkedlist l1,int n1,Linkedlist l2,int n2){
    Linkedlist l3;
    int i=0,j=0;

    while(i<n1 && j<n2){
        if(l1.getElement(i)<l2.getElement(j)){
            l3.insertend(l1.getElement(i));
            i++;
        }
        else{
            l3.insertend(l2.getElement(j));
            j++;
        }
    }

    while(i<n1){
        l3.insertend(l1.getElement(i));
        i++;
    }

    while(j<n2){
        l3.insertend(l2.getElement(j));
        j++;
    }
    
    cout<<"Sorted Merged List : ";
    l3.display();
}

int main(){
    Linkedlist l1,l2;

    cout<<"Enter the size of first list :";
    int n1;
    cin>>n1;
    cout<<"Enter items in first list :";
    for(int i=0;i<n1;i++){
        int data;
        cin>>data;
        l1.insertend(data);
    }

    cout<<"Enter the size of second list :";
    int n2;
    cin>>n2;
    cout<<"Enter items in second list :";
    for(int i=0;i<n2;i++){
        int data;
        cin>>data;
        l2.insertend(data);
    }
  
    sortedMerge(l1,n1,l2,n2);

    return 0;
}
