#include<bits/stdc++.h>
#include "Stack.cpp"
using namespace std;
class MyQueue{
    Stack s1,s2;
    public:
        void insert(){
        	if(!s1.isFull()){
        		int data;
        		cout<<"Enter data: ";
                cin>>data;
            s1.push(data);
          }
          else{
          	cout<<"Queue is Full \n";
		  }
        }
        void pop(){
            int x;
            if(s1.isEmpty() && s2.isEmpty()){
                cout<<"Queue is Empty !\n";
            }
            else{
                while(!s1.isEmpty()){
                    x=s1.pop();
                    s2.push(x);
                }
                x=s2.pop();
                cout<<x<<" is popped."<<endl;
                while(!s2.isEmpty()){
                    x=s2.pop();
                    s1.push(x);
                }
            }
        }
        void display(){
        	s1.display();
        }

};

int main(){
    MyQueue q;
    while(true){
    	cout<<"1-> Insert\n2-> Delete\n3-> Display \n4->exit"<<endl;
        int opt;
        cin>>opt;
        int data;
        switch(opt){
            case 1:
                    q.insert();
                break;
            case 2:
                    q.pop();
                    break;
            case 3:
            	q.display();
            	break;
            case 4:
                exit(0);
            default:
                cout<<"Choose a Correct operation !";
        }
    }

    return 0;
}
