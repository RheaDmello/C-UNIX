/*Write a C++ program to overload unary operator as i) member function
ii) friend function.*/

#include<iostream>
using namespace std;

class Number{
    public:
    int value;

    Number(int v):value(v) {}

    friend Number operator -(Number& n);

    void display(){
        cout<<"Value:"<<value<<endl;

    }
};
Number operator -(Number& n){
    n.value=-n.value;
    return n;
}

int main(){
cout<<"Before Unary:"<<endl;
Number n1(5);
-n1;
cout<<"After Unary:"<<endl;
n1.display();
return 0;
}