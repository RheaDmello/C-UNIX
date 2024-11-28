//single and multiple inheritance example
//Write a C++ program to demonstrate hybrid inheritance

#include<iostream>
using namespace std;

class vehicle{
    public:
    vehicle(){
        cout<<"This is a vehicle"<<endl;
    }
};

class car:public vehicle {
    public:
    car(){
        cout<<"This is a car"<<endl;
    }
};

class racing {
    public:
    racing(){
        cout<<"This is for racing"<<endl;
    }
};

class Ferrari:public car,public racing {
    public:
    Ferrari(){
        cout<<"This is a Ferrari"<<endl;
    }
};

int main(){
    Ferrari f1;
    return 0;
}