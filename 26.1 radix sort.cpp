#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
};

class queue{
    Node *front,*rear;
    public:
    queue(){
        front=rear=NULL;
    }
    int isEmpty();
    void insert(int);
    int del();
};
void queue::insert(int item){
    Node* curr=new Node ();
    curr->data=item;
    curr->next=NULL;
        if(rear==NULL){
            rear=front=curr;
            return;
        }
        else{
            rear->next=curr;
            rear=curr;
        }
}

int queue::del(){
    if(front==NULL){
        cout<<"queue is empty:\n";
        return -1;
    }
    else{
        Node* temp=front;
        front=front->next;
        int x=temp->data;
        delete temp;
        return x;
    }
}
int queue::isEmpty(){
    if(front==NULL)
        return 1;
    else
        return 0;
}

int getMax(int a[],int m){
    int max=a[0];
    for(int i=0;i<m;i++){
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    return max;
}

void display(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

void RadixSort(int arr[],int n)
{
    int m=getMax(arr,n);
    for(int pow10=1;m/pow10>0;pow10*=10)
    {
        queue q[10];
        for(int i=0;i<n;i++)
        {
            int digit=(arr[i]/pow10)%10;
            q[digit].insert(arr[i]);
        }
        int j=0;
        for(int i=0;i<10;i++){
            while(!q[i].isEmpty()){
                arr[j++]=q[i].del();
            }
        }
    }
}

int main(){
    int n;
    cout<<"enter number of elements:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elemets: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    RadixSort(arr,n);
    display(arr,n);

    return 0;
}
