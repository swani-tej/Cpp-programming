/*
Sum of the digits of a number;

example 243

output :
9

process :

1. Find the modulo 10 of the number. Gives us the units digit.
2. Add this unit digit to sum variable 
3. Divide the number with 10. 
4. If number after division is greater than 0, Go to step 1.
*/

#include<iostream>

using namespace std;

int main(){

    int num;
    cin>>num;
    int sum = 0;
    while (num > 0) {
        int unitDigit = num%10;
        sum = sum + unitDigit;
        num = num / 10;

    }

    cout<<sum<<endl;
    
    return 0;
}