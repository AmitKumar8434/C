#include<iostream>
using namespace std;
#define MAX 10
class Queue{
	int front;
    int rear;
    int arr[MAX];
	
	public:
		Queue(){
			front=-1;
			rear=-1;
		}
		int isFull(){
			if(rear==MAX-1)
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
				rear++;
				arr[rear]=item;
			}
			else
			cout<<"Queue Full \n";
		}
		int deQueue(){
			if(!isEmpty()){
				front++;
				return arr[front];
			}
			else
			cout<<"Queue is Empty";
		}
		void display(){
			if(!isEmpty()){
				for(int i=front+1;i<=rear;i++){
					cout<<arr[i]<<" ";
				}
				cout<<endl;
			}
			else
			cout<<"Queue is Empty \n";
		}
	
};
int main(void){
	Queue q;
	while(1){
		cout<<"PRESS  1 for ENQUEUE , "<<"2 for DEQUEUE  "<<" , 3 for DISPLAY and  4 to EXIT  \n ";
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
				  	break;
				  	case 4:
				  		exit(0);
			}
			
        }
}
