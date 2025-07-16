/*
print the digits of a number;

example 243

output :
3
4
2

process :

1. Find the modulo 10 of the number. Gives us the units digit.
2. Divide the number with 10. 
3. If number after division is greater than 0, Go to step 1.
*/

#include<iostream>

using namespace std;

int main(){

    int num;
    cin>>num;
    while (num > 0) {
        int unitDigit = num%10;
        cout<<unitDigit<<endl;
        num = num / 10;

    }
    
    return 0;
}