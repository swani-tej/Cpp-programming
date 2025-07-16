/*
Print all the even numbers 0 to 100
*/
#include<iostream>

using namespace std;

int main(){

    int i = 0;

    while(i<=100) {
        i++;
        if(i%2 == 0){
            cout<<i<<endl;
        }
        else if(i%2 == 1) {

            continue;
        }
    }

    return 0;

}