#include<stdio.h>
#include<iostream>
using namespace std ;
class Complex{
    int real;
    int imag;
    public:
    Complex(){
        real=0;
        imag=0;
    }
    Complex(int r , int i){
        real=r;
        imag=i;
    }
    void display(){
        if(imag>0){
            cout<<real<<" +"<<imag<<"i\n";
        }
        else{
             cout<<real<<" "<<imag<<"i\n";
        }
        
    }

    Complex operator+(Complex);
    Complex operator-(Complex);
    Complex operator*(Complex);
    Complex operator=(Complex);
};

Complex Complex::operator+ (Complex c){
        Complex temp;
        temp.real= real+c.real;
        temp.imag=imag+c.imag;
        return temp;
}
Complex Complex::operator-(Complex c){
        Complex temp;
        temp.real= real-c.real;
        temp.imag=imag-c.imag;
        return temp;
}
Complex Complex::operator*(Complex c){
        Complex temp;
        temp.real= real*c.real - imag*c.imag;
        temp.imag=real*c.imag+c.real*imag;
        return temp;
}
Complex Complex::operator=(Complex c) {
        real = c.real;
        imag = c.imag;
        return *this;
}

int main(){
    Complex c1(2,5),c2(4,-3),c3;
    
    cout<<" First Complex No. : ";
    c1.display();
    cout<<endl;

    cout<<" Second Complex No. : ";
    c2.display();
    cout<<endl;

    cout<<"----- Addition Operator -----\n";
    c3=c1.operator+(c2);
    c3.display();
    
    cout<<"----- Substraction Operator -----\n";
    c3=c1.operator-(c2);
    c3.display();
    
    cout<<"----- Multiplication Operator -----\n";
    c3=c1.operator*(c2);
    c3.display();
     
    cout<<"-----Equal Operator-----\n";
    c3.operator+(c2);
    c3.display();

    return 0;
}