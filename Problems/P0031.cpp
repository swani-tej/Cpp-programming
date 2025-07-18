/*
Reverse of a number 

Input : 2626
Output : 6262

*/
#include<iostream>

using namespace std;

int main(){
    cout<<"Enter a number that should be reversed"<<endl;
    int num;
    cin>>num;

    int reverseNum = 0;

    while(num>0) {
        int remainder = num % 10;

        reverseNum = (reverseNum*10) + remainder;

        num = num/10;

    }

    cout<<reverseNum<<endl;
    
    return 0;
}