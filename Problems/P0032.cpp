/*
Find if the number is a palindrome or not 

input : 2002
output : It is a palindrome.

input : 2008
output : The number is not a palindrome.

*/
#include<iostream>

using namespace std;

int main(){
    cout<<"Enter a number that should be reversed"<<endl;
    int num;
    cin>>num;
    int Originalnum = num;

    int reverseNum = 0;

    while(num>0) {
        int remainder = num % 10;

        reverseNum = (reverseNum*10) + remainder;

        num = num/10;

    }
    if(Originalnum == reverseNum) {

        cout<<"It is a palindrome"<<endl;
    }else{

        cout<<"It is not a palindrome"<<endl;
    }
    
    return 0;
}