#include<iostream>

using namespace std;

int main ()  {

    int a , b;

    cout<< "enter a value : ";
    cin>> a;
    cout<< "enter b value : ";
    cin>> b;

    int addition, substraction, division, multiplication, modulo;

    addition = a+b;

    multiplication = a*b;

    division = a/b;

    substraction = a-b;

    modulo = a%b;

    cout<< "Addition : "<<addition<<endl<<"Substraction : "<<substraction<<endl;
    cout<< "Multiplication : "<<multiplication<<endl<<"Division : "<<division<<endl;
    cout<< "Modulo : "<<modulo<<endl;

    
    return 0;
}