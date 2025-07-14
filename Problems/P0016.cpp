#include<iostream>

using namespace std;

int main() {
    cout<<"Enter two values"<<endl;
    int a , b;
    cin>>a>>b;

    int minimum;

    if(a<b) {

        minimum = a;
    }
    else{

        minimum = b;

    }

    cout<<"Minimun is : "<<minimum<<endl;

    return 0;
}