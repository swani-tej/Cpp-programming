/*
Print sum of 100 to 1 numbers using for loop
*/
#include<iostream>

using namespace std;

int main(){

    int sum = 0;

    for ( int i = 1; i <= 100; i++)
    {
        sum = sum + i;
    }
    cout<<sum<<endl; 
    return 0;

}