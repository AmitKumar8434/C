#include<iostream>
#include<stdlib.h>
using namespace std;
class Complex{
	public:
	int real,imag;
	Complex(){
		real=0;
		imag=0;
	}
	Complex(int r,int i){
		real=r;
		imag=i;
	}
	Complex(const Complex &obj){
		real=obj.real;
		imag=obj.imag;
	}
	void set(int r,int i){
		cin>>real>>imag;
	}
	void display(){
		if(imag>=0){
			cout<<"Complex Number is : ";
			cout<<real<<"+i"<<imag;
		}
		else{
			cout<<"Complex Number is : ";
			cout<<real<<"-i"<<(-imag);
		}
	}
	Complex sum(Complex c1,Complex c2){
		Complex temp;
		temp.real=c1.real+c2.real;
		temp.imag=c1.imag+c2.imag;
		return temp;
	}
};
int main(void){
	int r,i;
	Complex c1,c2,c3;	
	cout<<"Enter first complex number : ";
	c1.set(r,i);
	c1.display();		
	cout<<"\nEnter second complex number : ";
	c2.set(r,i);
	c2.display();
	cout<<"\n Added  ";
	c3=c3.sum(c1,c2);	
	c3.display();
}
