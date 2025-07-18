/*
Fimd the number is prime or not

example : 
Input : 23
output : Prime

Input : 15
Output : Not prime
*/



#include<iostream>

using namespace std;

int main(){
    cout<<"Enter  a number : "<<endl;
    int num;
    cin>>num;
    bool isPrime = true;
    int i = 2;
    while(i<num) {

        if(num%i == 0 )  {
            isPrime = false;
            break;
        }

            i++;
    }

    if(isPrime) {

        cout<<"Is Prime"<<endl;

    } else{

        cout<<"Is Not Prime"<<endl;
    }
    
    return 0;
}