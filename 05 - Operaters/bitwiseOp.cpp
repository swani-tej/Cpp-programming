#include<iostream>

using namespace std;

int main ()  {

    int a , b;

    
    cout<< "enter a value : ";
    cin>> a;
    cout<< "enter b value : ";
    cin>> b;

    cout<<"a | b ? : "<<(a|b)<<endl;
    cout<<"a & b ? : "<<(a&b)<<endl;
    cout<<"a ^ b ? : "<<(a^b)<<endl;
    cout<<"~a ? : "<<(~a)<<endl;
    cout<<"a << 1 ? : "<<(a<<1)<<endl;
    cout<<"a >> 1 ? : "<<(a>>1)<<endl;
    return 0;
}