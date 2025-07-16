/*
Sum of 1 to 100
*/
#include<iostream>

using namespace std;

int main(){

    int i = 1;
    int sum = 0;
    while(i<=100) {
        sum = sum + i;
        i = i + 1;
    }
    cout<<sum<<endl;
    return 0;

}