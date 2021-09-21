#include<iostream>
using namespace std;
#define MAX 5
class Queue{
	int front;
    int rear;
    int arr[MAX];
	
	public:
		Queue(){
			front=0;
			rear=0;
		}
		int isFull(){
			if((rear+1)%MAX==front)
			return 1;
			else 
			return 0;
		}
		int isEmpty(){
			if(rear==front)
			return 1;
			else
			return 0;
		}
		void enQueue(int item){
			if(!isFull()){
				rear=(rear+1)%MAX;
				arr[rear]=item;
			}
			else
			cout<<"Queue Full \n";
		}
		int deQueue(){
			if(!isEmpty()){
				front=(front+1)%MAX;
				return arr[front];
			}
			else
			cout<<"Queue is Empty \n";
			return INT_MIN;
		}
		void display(){
			if(!isEmpty())
			{
			if(rear>=front){
				for(int i=front;i<=rear;i++){
					cout<<arr[i]<<" ";
				}
			  }
				else
				{
					for(int i=front+1;i<MAX;i++)
					cout<<arr[i]<<" ";
				for(int i=0;i<=rear;i++)
				cout<<arr[i]<<" ";
				
		     	}}
		     	else
		     	cout<<"Queue is Empty";
		     }
	
};
int main(void){
	Queue q;
	while(1){
		cout<<"PRESS  1 for ENQUEUE , "<<"2 for DEQUEUE  "<<"and 3 for DISPLAY and 4 to EXIT \n ";
		int ch;
		cin>>ch;
		switch(ch){
			case 1:
				if(!q.isFull()){
					cout<<"Enter item :";
					int item;
					cin>>item;
					q.enQueue(item);
					break;
				}
				else
				cout<<"Queue is Full \n";
              case 2:
              	if(!q.isEmpty()){
              		int x=q.deQueue();
              		break;
				  }
				  else
				  cout<<"Queue is Empty \n";
				  case 3:
				  	q.display();
				  	cout<<endl;
				  	break;
				  	case 4:
				  		exit(0);
			}
		}
			
        
}
