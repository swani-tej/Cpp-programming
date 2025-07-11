#include<iostream>

using namespace std;

int main ()  {

    int a , b;

    
    cout<< "enter a value : ";
    cin>> a;
    cout<< "enter b value : ";
    cin>> b;

    a += b;     /*  a = a+b  
                similarly 
                for - a = a-b
                for * a *= a*b
                for % a %= a%b 
                for / a /= a/b
                */

    cout<< a <<endl;

    return 0;
}