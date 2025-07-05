#include<iostream>

using namespace std;

int main(){

    cout<<"Enter a capital letter to get a small letter : ";

    char ch ;

    cin>>ch;

    ch = ch + 32;
    
    cout<< ch <<endl;
    return 0;
    
}

