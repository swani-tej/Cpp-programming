#include<iostream>

using namespace std;

int main ()  {

    int a , b;
    cout<<"enter a value"<<endl;
    cout<<"enter b value"<<endl;

    cin>>a;
    cin>>b;

    a = ++a; //a increased by one   
    b = --b; // b decreased by one

    cout<<"A is : "<<a<<endl; 
    cout<<"B is : "<<b<<endl;
    
    return 0;
}